/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_exit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 11:44:24 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/09 15:57:51 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	error_exit(char *str, int error)
{
	ft_putstr_fd("Error : ", 2);
	ft_putendl_fd(str, 2);
	exit(error);
}
