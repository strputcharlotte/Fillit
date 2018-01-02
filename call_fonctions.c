/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_fonctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 15:23:38 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/02 19:31:24 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

//reduction tetro

char	**plcmt(char **tab)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (tab)
	{
		if (y == 4)
		{
			x++;
			y = 0;
		}
		y++;
	}
}

int		call_fonctions(int argc, char **argv)
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
}
