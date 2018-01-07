/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 17:29:34 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/07 15:28:37 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	ft_free_tab()

static int	ft_comptl(char **tab, char c)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[j])
	{
		if (tab[j][i] == c)
		{
			i = -1;
			j++;
		}
		i++;
		if (tab[j][i] == c + 1)
			return (j);
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
	if (!(newline = (char**)malloc(sizeof(char *) * ft_comptl(tab, c) + 1)))
		return (NULL);
	while (tab[j])
	{
		if (tab[j][i] == c)
		{
			newline[y] = ft_strdup(tab[j]);
			i = -1;
			j++;
			y++;
		}
		i++;
		if (tab[j][i] == c + 1)
			return (tab);
	}
	return (NULL);
}
