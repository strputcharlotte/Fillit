/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:12:33 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 19:36:40 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

static void			next_line(char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab)
	{
		if (tab[x] == '\0')
			y++;
		x++;
	}
}

static int			cpt_tetro(char **tetro)
{
	int i;
	int x;
	int cpt_n;
	int cpt_tetro;

	cpt_tetro = 0;
	while (cpt_tetro >= 0)
	{
		x = 0;
		if (tetro[x][4] == '\n')
			next_line(tetro);
		cpt_n = 0;
		i = 0;
		while (cpt_n < 4)
		{
			if (tetro[x][i] == '\n')
				cpt_n++;
			i++;
		}
		if (cpt_n == 4 && tetro[x][i] == '\n')
			next_line(tetro);
	}
	if (cpt_tetro > 26)
		error_exit("Too many tetros", 200);
	return (cpt_tetro);
}

char			**parsing_tab(char **tab)
{
	int x;
	int y;
	int cpt_pts;

	x = 0;
	y = 0;
	while (tab[y])
	{
		y++;
		x++;
	}
	if (!(x == 4 || y == 4))
		error_exit("Wrong size of tab", 100);
	x = 0;
	y = 0;
	cpt_pts = 0;
	while (tab[y])
	{
		if (tab[x][y] == '\n' && tab[x])
		{
			y = 0;
			x++;
		}
		if (y == '.')
		{
			cpt_pts++;
			y++;
		}
	}
	if (cpt_pts != 12)
		error_exit("Not a valid tetro", 101);
	return (tab);
}

int				error(char **tab)
{
	int		x;
	int		y;
	int		cpt;

	x = 0;
	while (x < 4)
	{
		if (tab[x][4] != '\n')
			error_exit("Not a valid tetro", 102);
		x++;
	}
	if (cpt_tetro(tab) < 1)
		error_exit("Too few tetros", 103);
	cpt = 0;
	y = 0;
	while (*tab[y] == '#')
	{
		if (cpt > 4)
			error_exit("Not a valid tetro", 104);
		if ((*tab[y] == '\n' || tab[y] == '\0') && cpt != 4)
			error_exit("Not a valid tetro", 105);
		y++;
		cpt++;
	}
	while (y < 4)
		if ((*tab[y] != '.' || *tab[y] != '#') && y < 3)
		{
			error_exit("Not a valid tetro", 106);
			y++;
		}
	return (0);
}

char			**true_tetro(char **tab)
{
	int	x;
	int	y;
	int	cpt;

	x = 0;
	y = 0;
	cpt = 0;
	while (**tab)
	{
		while (tab[y])
		{
			if (y == '#')
				cpt++;
			y++;
		}
		while (tab[x])
		{
			if (x == '#')
				cpt++;
			x++;
		}
	}
	if (cpt == 6 && cpt == 8)
		return (tab);
	else
		error_exit("Not a valid tetro", 107);
	return (tab);
}
