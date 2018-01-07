/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:28:59 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/07 19:50:11 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#include <stdio.h>

void		ft_print_map(char **map)
{
	int i;

	i = 0;
	while (map[i])
	{
		ft_putstr(map[i]);
		write(1, "\n",1);
		i++;
	}
}

int				main(int argc, char **argv)
{
	char **tab;
	char **test;
	char *str;
	int i;

	 i = 0;


	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	str = ft_read(argv);
	tab = ft_strsplit(str, '\n');
	test = call_fonctions(tab);
	ft_print_map(test);
	ft_print_map(ft_solver (tab, 0, str));
	return (0);
}



	/*
	printf("%s\n", str);
	printf("%d\n",ft_sizemin(ft_compttetri(str)));
	map = ft_emptymap(7);
	map[0][0] = 'F';
	printf("%d\n", ft_checktetri(1, 0, map, ft_strsplit("BB\nB.\nB.", '\n')));
	map = ft_placetetri(0, 0, map, ft_strsplit("BB\nB.\nB.", '\n'));
	printf("%s\n", map[3]);
	return (0);
}
*/
