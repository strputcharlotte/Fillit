/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:22:20 by emoreau           #+#    #+#             */
/*   Updated: 2017/12/14 17:48:20 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

static int	ft_horsmap(int i, int j, char **map, char **tetri)
{
	int care;

	care = ft_strlen(map[0]) - i - ft_strlen(tetri[0]);
	if (care < 0)
		return (1);
	care = 0;
	while(tetri[care])
		care++;
	care = ft_strlen(map[0]) - j - care;
	if (care < 0)
		return (1);
	return (0);
}

int			ft_checktetri(int i, int j, char **map, char **tetri)
{
	int x;
	int y;
	int i_save;

	x = 0;
	y = 0;
	i_save = i;
	if (ft_horsmap(i, j, map, tetri) == 1)
		return (1);
	while (tetri[y])
	{
		x = 0;
		while (tetri[y][x])
		{
			if (tetri[y][x]!= '.' && tetri[y][x] != '\n' && tetri[y][x] != '\0')
				if (map[j][i] != '.' && map[j][i] != '\n' && map[j][i] != '\0')
					return (1);
			x++;
			i++;
		}
		y++;
		j++;
		i = i_save;
	}
	return (0);
}

char	**ft_placetetri(int i, int j, char **map, char **tetri)
{
	int x;
	int y;
	int i_save;

	y = 0;
	i_save = i;
	while (tetri[y])
	{
		x = 0;
		while (tetri[y][x])
		{
			if (tetri[y][x]!= '.' && tetri[y][x] != '\n' && tetri[y][x] != '\0')
				map[j][i] = tetri[y][x];
			x++;
			i++;
		}
		y++;
		j++;
		i = i_save;
	}
	return (map);
}

char	**ft_solver(t_list alltetri)
{
	char **map;
	char **tetri;
	char c;
	int i;
	int j;

	c = 'A';
	i = 0;
	j = 0;
	tetri = ft_charlotte(c, alltetri);
	size = ft_sizemin(ft_compttetri(tetri));
	ft_emptymap(size);
	while (map[j])
	{
		while (map[j][i])
		{
			if(ft_checktetri(i, j, map, tetri) == 0)
			{
				ft_placetetri(i, j, map, tetri);
			}
			i++;
		}
		j++;
		i = 0;
	}
	c++;
}
