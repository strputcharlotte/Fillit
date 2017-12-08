/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:53:51 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/08 19:01:50 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

int		open(char *fd, int O_RDONLY)
{
	if (fd)
		return (1);
	else
		return (-1);
}

int		main(int argc, char **argv)
{
	int fd;
//le buffer taille 5 correspond au nombre de char par ligne (donc les 4 points
//et/ou # + le \n)
	char buff_fixe[5];
	char *buff_var;

	fd = open(argc[1], O_RDONLY)
	if (!(buff_var = malloc(sizeof(char * 5))))
		return (NULL);
}
