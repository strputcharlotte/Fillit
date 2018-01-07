/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:43:47 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 15:26:33 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# define BUFF_SIZE 600
#include <stdlib.h>
#include <unistd.h>
#include "libft/libft.h"

void				error_exit(char *str, int error);
char				*ft_read(char *argv);
char				*ft_convletter(char *str);
char				**ft_emptymap(int size);
char				**ft_placetetri(int i, int j, char **map, char **tetri);
char				**ft_solver(char **argv, int size);
char				**true_tetro(char **tab);
char				**parsing_tab(char **tab);
char				**call_fonctions(char **argv);
char				**plcmt(char **argv);
int					ft_checktetri(int i, int j, char **map, char **tetri);
int					ft_sizemin(int nbrtetri);
int					ft_compttetri(char *str);
int					error(char **tab);
int					main(int argc, char **argv);
char				**ft_define_tetri(char **tab, char c);

#endif
