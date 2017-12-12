/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:12:33 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/12 17:58:46 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

/*
 * 4 # mais pas collés;
 * mauvais nombre de points;
 * */

int		error(char *line, int fd, int nbtetro)
{
	int		i;
	int		cpt;
	int		cpt_pts;
	char	buff_fixe[5];
	char	*buff_var;

	//if (!(buff_var = malloc(sizeof(char) * 5)))
	//return (0);
	if (line[4] != '\n')
		error_exit("Not a valid tetro", 100);
	if (nbtetro > 26 || nbtetro < 1)
		error_exit("Too many or too few tetros", 105);
	cpt = 0;
	i = 0;
	while (line[i] == '#')
	{
		i++;
		cpt++;
		if (*cpt > 4)
			error_exit("Not a valid tetro", 102);
		if (line[i] == '\0' && *cpt != 4)
			error_exit("Not a valid tetro", 103);
	}
	while (line[i] < 4)
	{
		if ((line[i] != '.' || line[i] != '#') && line[i] < 3)
			error_exit("Not a valid tetro", 101);
		i++;
	}
	return (fd);
}

int		**parser(int **tetro, char *line)
{
	int i;
	int cpt; //compteur \n

	//malloc tetro
	i = 0;
	//if 5 \n -> new tetro
	//if line[4] = \n -> recommence
	while (cpt < 4)
	{
		if (line[i] == '\n')
			cpt++;
		i++;
	}
}
