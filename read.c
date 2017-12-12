/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:51 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/12 18:00:15 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "error_exit.c"
#include "includes.h"

char	*ft_read(char *argv)
{
	int fd;

	if ((fd = open(argv, O_RDONLY)) == -1)
		error_exit("File doesn't exist", 100);
	int ret;
	char str[BUFF_SIZE + 1];
	ret = read(fd, str, BUFF_SIZE);
	str[ret] = 0;
	return (ft_strdup(str));
}
