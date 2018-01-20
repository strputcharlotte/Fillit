/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 17:29:34 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/20 14:56:23 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

static int	ft_comptl(char **tab, char c)
{
	int i;
	int j;
	int m;

	i = 0;
	j = 0;
	m = 0;
	printf("1 : %s\n", tab[j]);
	while (tab[j])
	{
		printf("test2\n");
		if (tab[j][i] == c)
		{
			i = -1;
			j++;
			m++;
			printf("test3\n");
		}
		else if (tab[j][i] >= 'A' && tab[j][i] <= c)
		{
			i = -1;
			j++;
			//if (tab[j][i] == c)
				//m++;
				printf("test4\n");
		}
		i++;
		if (tab[j][i] == c + 1 || tab[j][i] == '.')
			return (m);
	}
	return (0);
}

char	**ft_define_tetri(char **tab, char c)
{
	int i;
	int j;
	char **newline;
	int y;

	i = 0;
	j = 0;
	y = 0;
	if (!(newline = (char**)malloc(sizeof(char *) * ft_comptl(tab, c))))
		return (NULL);
	while (tab[j])
	{
		printf("test5\n");
		if (tab[j][i] == c)
		{
			if (!(newline[y] = (char*)malloc(sizeof(char) * ft_comptl(tab, c))))
				return (NULL);
			newline[y] = ft_strdup(tab[j]);
			i = -1;
			if (tab[j + 1])
				j++;
			y++;
			printf("test6\n");
		}
		else if (tab[j][i] >= 'A' && tab[j][i] < c)
		{
			i = -1;
			if (tab[j + 1])
				j++;
				printf("test7");
		}
		i++;
		if (!(tab[j][i]))
			j++;
		if (tab[j][i] == c + 1 || tab[j][i] == '.')
			return (newline);
		if (tab[j][i] == '\n' && tab[j][i + 1] == 0)
			return (newline);
	}
	return (newline);
}
