/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:51 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 17:03:45 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "error_exit.c"
#include "includes.h"

char	*ft_read(char **argv)
{
	int fd;
	int ret;
	char *str2;
	char str[BUFF_SIZE + 1];

	if ((fd = open(argv[1], O_RDONLY)) == -1)
		error_exit("File doesn't exist", 100);
	ret = read(fd, str, BUFF_SIZE);
	str[ret] = 0;
	str2 = ft_convletter(ft_strdup(str));
	return (str2);
}
