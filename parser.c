/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:12:33 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/18 18:50:48 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

/*
**parse le tetro et verifie la taille du tab + le nbr de points
*/

char			**parsing_tab(char **tab)
{
	int x;
	int y;
	int cpt_pts;

	x = 0;
	y = 0;
	while (**tab && (x++))
		y++;
	if (!(*tab[x] == 4 && *tab[y] == 4))
		error_exit("Wrong size of tab", 100);
	x = 0;
	y = 0;
	cpt_pts = 0;
	while (tab)
	{
		if (y == '\n' && tab[x] && (x++))
			y = 0;
		if (y == '.' && (y++))
			cpt_pts++;
	}
	if (cpt_pts != 12)
		error_exit("Not a valid tetro", 101);
	return (tab);
}

/*
**parse chaque ligne, verifie le nombre de \n, de #, de tetro, si \n fin de
**ligne
*/

int				error(char *line, int fd, int nbtetro)
{
	int		i;
	int		cpt;
	int		cpt_pts;
	char	buff_fixe[5];
	char	*buff_var;

	if (!(buff_var = malloc(sizeof(char) * 5)))
		return (0);
	if (line[4] != '\n')
		error_exit("Not a valid tetro", 102);
	if (nbtetro > 26 || nbtetro < 1)
		error_exit("Too many or too few tetros", 103);
	cpt = 0;
	i = 0;
	while (line[i] == '#' && (i++) && (cpt++))
	{
		if (cpt > 4)
			error_exit("Not a valid tetro", 104);
		if ((line[i] == '\n' || line[i] == '\0') && cpt != 4)
			error_exit("Not a valid tetro", 105);
	}
	while (line[i] < 4)
		if ((line[i] != '.' || line[i] != '#') && line[i] < 3 && (i++))
			error_exit("Not a valid tetro", 106);
	return (fd);
}

static void			next_line(char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab)
	{
		if (tab[y] == '\0')
			x++;
	}
}

/*
**malloc tab, gestion changement de ligne pendant parsing, changement tetro
*/

char			**ft_parsing(char **tetro, char *line)
{
	int i;
	int x;
	int y;
	int cpt_n;

	if (!(tetro = (char**)malloc(sizeof(char*) * (ft_strlen(line) * 4))))
		return (NULL);
	i = 0;
	if (line[4] == '\n')
		next_line(tetro);
	while (cpt_n < 4)
	{
		if (line[i] == '\n')
			cpt_n++;
		i++;
	}
	if (cpt_n == 4 && line[i] == '\n')
		next_line(tetro);
	return (tetro);
}

/*
**verifie si 4 # colles
*/

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
		while (tab[y] && (y++))
		{
			if (y == '#')
				cpt++;
		}
		while (tab[x] && (x++))
		{
			if (x == '#')
				cpt++;
		}
	}
	if (cpt == 6 && cpt == 8)
		return (tab);
	else
		error_exit("Not a valid tetro", 107);
	return (tab);
}
