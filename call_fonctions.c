/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_fonctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 15:23:38 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/29 17:38:28 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

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
