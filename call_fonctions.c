/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_fonctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 15:23:38 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/03 19:18:19 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#include <stdio.h>

char			**plcmt(char **tab)
{
	int x;
	int y;
	char **new;

	x = 4;
	y = 4;
	if (!(new = (char**)malloc(sizeof(char*) * (x * y))))
		return (NULL);
//	if (!(new[x] = (char*)malloc(sizeof(char) * (ft_strlen(tab[x])))))
//		return (NULL);
	x = 0;
	y = 0;
	while (tab)
	{
		if (ft_strcmp(tab[y], "#") == 0)
		{
			y++;
			if (y == 3)
			{
				x++;
				y = 0;
			}
		}
		if (ft_strcmp(tab[y], "#") != 0 && y <= 3)
		{
			new = new + y;
			y++;
		}
		x++;
		y = 0;
	}
	free(new);
	printf("%s\n", *new);
	return (new);
}

/*int			call_fonctions(int argc, char **argv)
{
	if (argc > 2)
		error_exit("Too many arguments", 300);
	while (**argv == 1)
	{
		parsing_tab(argv);
		true_tetro(argv);
		error(argv);
	}
	return (0);
}*/
