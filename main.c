/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 14:28:59 by emoreau           #+#    #+#             */
/*   Updated: 2017/12/10 16:19:11 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char *str;

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
	return (0);
}
