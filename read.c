/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:51 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/09 15:57:42 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "error_exit.c"

int		open(char *fd, int O_RDONLY)
{
	fd = "parser.c";
	if (fd)
		return (1);
	else
		return (-1);
}

int		main(int argc, char **argv)
{
	int fd;
//buff_fixe[5] => 5 char par ligne (4 #/. ; 1 \n)
	char buff_fixe[5];
	char *buff_var;

	if ((fd = open(argv[1], 4)) == -1)
		error_exit("File doesn't exist", 100);
	printf("%d\n", fd);
//	if (!(buff_var = malloc(sizeof(char) * 5)))
//		return (0);
}
