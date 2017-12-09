/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:43:47 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/09 15:57:45 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
#include <stdlib.h>
#include "libft/libft.h"

void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd (char const *s, int fd);
void	error_exit(char *str, int error);

#endif
