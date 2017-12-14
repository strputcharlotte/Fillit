/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:28:59 by emoreau           #+#    #+#             */
/*   Updated: 2017/12/14 16:15:48 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;
	char **map;
	int i;

	 i = 0;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (1);
	}
	str = ft_read(argv[1]);
	printf("%s\n", str);
	str = ft_convletter(str);
	printf("%s\n", str);
	printf("%d\n",ft_compttetri(str));
	printf("%d\n",ft_sizemin(ft_compttetri(str)));
	map = ft_emptymap(7);
	map[0][0] = 'F';
	printf("%d\n", ft_checktetri(1, 0, map, ft_strsplit("BB\nB.\nB.", '\n')));
	map = ft_placetetri(0, 0, map, ft_strsplit("BB\nB.\nB.", '\n'));
	printf("%s\n", map[3]);
	return (0);
}
