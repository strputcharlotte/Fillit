/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:43:47 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 17:22:49 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# define BUFF_SIZE 600
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "libft/libft.h"

void				error_exit(char *str, int error);
char				*ft_read(char **argv);
char				*ft_convletter(char *str);
char				**ft_emptymap(int size);
char				**ft_solver(char **argv, int size, char *str);
char				**true_tetro(char **tab);
char				**parsing_tab(char **tab);
char				**call_fonctions(char **argv);
char				**plcmt(char **argv);
int					ft_sizemin(int nbrtetri);
int					ft_compttetri(char *str);
int					error(char **tab);
char				**ft_define_tetri(char **tab, char c);

#endif
