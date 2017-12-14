/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:43:47 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/14 16:04:27 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# define BUFF_SIZE 600
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd (char const *s, int fd);
void	error_exit(char *str, int error);
char	*ft_read(char *argv);
char	*ft_convletter(char *str);
int		ft_compttetri(char *str);
int		ft_sizemin(int nbrtetri);
char	**ft_emptymap(int size);
int		ft_checktetri(int i, int j, char **map, char **tetri);
char	**ft_placetetri(int i, int j, char **map, char **tetri);

#endif
