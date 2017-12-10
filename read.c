/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:51 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/10 17:20:08 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "error_exit.c"
#include "includes.h"

/* Open est une fonction qui existe deja et qu'on a pas besoin de recoder
Pareil pour read.

int		open(char *fd, int O_RDONLY)
{
	fd = "parser.c";
	if (fd)
		return (1);
	else
		return (-1);
}

*/

char		*ft_read(char *argv)
{
	int fd;
//buff_fixe[5] => 5 char par ligne (4 #/. ; 1 \n)
/*
	char buff_fixe[5];
	char *buff_var;
*/
	if ((fd = open(argv, O_RDONLY)) == -1)
		error_exit("File doesn't exist", 100);
	int ret;
	char str[BUFF_SIZE + 1];
	ret = read(fd, str, BUFF_SIZE);
	str[ret] = 0;
	return (ft_strdup(str));
//	if (!(buff_var = malloc(sizeof(char) * 5)))
//		return (0);
}
