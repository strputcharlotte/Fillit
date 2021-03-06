/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:22:20 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/07 17:08:30 by emoreau          ###   ########.fr       */
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

static int			ft_checktetri(int i, int j, char **map, char **tetri)
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

static char	**ft_placetetri(int i, int j, char **map, char **tetri)
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

/*
char	**ft_removetetri(char **map, char c, int size)
{
	int i;
	int j;
	int compt;

	i = 0;
	j = 0;
	compt = 0;

	while (compt < 4)
	{
		while (map[j][i] == c)
		{
			map[j][i] = '.';
			i++;
			compt++;
		}
		if (i = size)
		{
			i = 0;
			j++;
		}
	}
	return (map);
}
*/

// alltetri = le fichier contenant tous les tetriminos

char	**ft_solver(char **tab, int size, char *str)
{
	char **map;
	char **tetri;
	char c;
	int i;
	int j;
	int compt;
	int i_save;
	int j_save;

	c = 'A';
	i = 0;
	j = 0;
	compt = 0;
	i_save = 0;
	j_save = 0;
	//tab = call_functions()
	size = ft_sizemin(ft_compttetri(str));
	map = ft_emptymap(size);
	while (size < 14)
	{
		while (map[j])
		{
			while (map[j][i])
			{
				tetri = ft_define_tetri(tab, c);
				if (ft_checktetri(i, j, map, tetri) == 0)
				{
					ft_placetetri(i, j, map, tetri);
					compt++;
					i = -1;
					j = 0;
				}
				i++;
				c++;
			}
			j++;
			i = 0;
		}
		if (compt < ft_compttetri(str))
		{
			ft_emptymap(size);
			if (i_save < size)
				i_save++;
			else
			{
				i_save = 0;
				j_save++;
			}
			i = i_save;
			j = j_save;
		}
		if (j_save == size && i_save == size && compt < ft_compttetri(str))
		{
			size++;
			ft_emptymap(size);
		}
	}
	return (map);
}
