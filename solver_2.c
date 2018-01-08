/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 17:29:34 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/08 23:27:52 by cfarjane         ###   ########.fr       */
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
		/*if (tab[j][i] == c)
		{
			i = -1;
			j++;
			m++;
		}*/
		if (tab[j][i] >= 'A' && tab[j][i] <= c)
		{
			i = -1;
			j++;
			if (tab[j][i] == c)
				m++;
		}
		i++;
		if (tab[j][i] == c + 1)
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
		if (tab[j][i] == c)
		{
			newline[y] = ft_strdup(tab[j]);
			i = -1;
			if (tab[j + 1])
				j++;
			y++;
		}
		else if (tab[j][i] >= 'A' && tab[j][i] < c)
		{
			i = -1;
			if (tab[j + 1])
				j++;
		}
		i++;
		if (!tab[j][i])
			j++;
		if (tab[j][i] == c + 1)
			return (newline);
		if (tab[j][i] == '\n' && tab[j][i + 1] == 0)
			return (newline);
	}
	return (newline);
}
