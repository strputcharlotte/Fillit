/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:12:33 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/14 11:52:42 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	**parsing_tab(char **tab)
{
	int x;
	int y;
	int cpt_pts;

	x = 0;
	y = 0;
	while (**tab)
	{
		x++;
		y++;
	}
	if (!(*tab[x] == 3 && *tab[y] == 3))
		error_exit("Wrong size of tab", 104);
	if (cpt_pts != 12)
		error_exit("Not a valid tetro", 106);
	return (tab);
}

int		error(char *line, int fd, int nbtetro)
{
	int		i;
	int		cpt;
	int		cpt_pts;
	char	buff_fixe[5];
	char	*buff_var;

	if (!(buff_var = malloc(sizeof(char) * 5)))
		return (0);
	if (line[4] != '\n')
		error_exit("Not a valid tetro", 100);
	if (nbtetro > 26 || nbtetro < 1)
		error_exit("Too many or too few tetros", 105);
	cpt = 0;
	i = 0;
	while (line[i] == '#' && (i++) && (cpt++))
	{
		if (cpt > 4)
			error_exit("Not a valid tetro", 102);
		if (line[i] == '\0' && cpt != 4)
			error_exit("Not a valid tetro", 103);
	}
	while (line[i] < 4)
		if ((line[i] != '.' || line[i] != '#') && line[i] < 3 && (i++))
			error_exit("Not a valid tetro", 101);
	return (fd);
}

char	*parser(char *tetro_line)
{
	while (*tetro_line)
		tetro_line++;
	return (tetro_line);
}

char	**ft_parsing(char **tetro, char *line)
{
	int i;
	int x;
	int y;
	int cpt_n;

/*	if (!(tetro = (char**)malloc(sizeof(char*) * ((ft_strlen(line) * 4	) + 1))))
	return (NULL);
	while (**tab)
	{
		if (!(tetro[y] = (char*)malloc(sizeof(char) * (ft_strlen(line) + 1))))
			return (NULL);
	}*/
	i = 0;
	if (line[4] == '\n')
		parser(line);
	while (cpt_n < 4)
	{
		if (line[i] == '\n')
			cpt_n++;
		i++;
	}
	if (cpt_n == 4 && line[i] == '\n')
		parser(line);
	return (tetro);
}

char	**checking(char **tab)
{
	int x;
	int	y;

	return (tab);
}
