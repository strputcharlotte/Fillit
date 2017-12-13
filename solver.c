/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 16:22:20 by emoreau           #+#    #+#             */
/*   Updated: 2017/12/13 18:49:39 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		ft_checktetri(int i, int j, char **map, char **tetri)
{
	int x;
	int y;
	int i_save;
	int care;

	care = ft_strlen(map[0]) - i - ft_strlen(tetri[0]);
	if (care < 0)
		return (1);
	//manque quand c'est trop bas

	x = 0;
	y = 0;
	i_save = i;
	while (tetri[y])
	{
		x = 0;
		while (tetri[y][x])
		{
			if (tetri[y][x]!= '.' && tetri[y][x] != '\n' && tetri[y][x] != '\0')
				if (map[i][j] != '.' && map[i][j] != '\n' && map[i][j] != '\0')
					return (1);
			x++;
			i++;
		}
		y++;
		j++;
	}
	return (0);
}
/*
void	ft_placetetri(int i, int j, char **map, char *tetri)
{

}


char	**ft_solver(char *str)
{
	char **map;
	size = ft_sizemin(ft_compttetri(str));
	ft_emptymap(map, size);
	if(ft_checktetri(i, j, map,tetri) == 1)
	{
		ft_placetetri(i, j, map, tetri);
	}
	i++;
}
*/
