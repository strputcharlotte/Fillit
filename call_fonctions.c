/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_fonctions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <cfarjane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/29 15:23:38 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 20:13:10 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char		**plcmt(char **tab)
{
	int		x;
	int		y;
	int		j;
	int		k;
	char	**new;

	x = 4;
	y = 4;
	if (!(new = (char**)malloc(sizeof(char*) * (x * y))))
		return (NULL);
	x = 0;
	y = 0;
	k = 0;
	j = 0;
	while (tab)
	{
		if (ft_strcmp(tab[y], "#") == 0 && (y++))
			y == 3 ? x++ : y == 0;
		if (!(new[k] = (char*)malloc(sizeof(char) * (ft_strlen(tab[y])))))
			return (NULL);
		if (ft_strcmp(tab[y], "#") != 0 && y <= 3)
			new[k] = new[k + (y++)];
		new[j] = new[j + (x++)];
		y = 0;
	}
	return (new);
}

char			**call_fonctions(char **argv)
{
	char	c;
	int		cnt;
	char **tetri;

	c = 'A';
//	char **test;
//	if (argc > 2)
//		error_exit("Too many arguments", 300)
	cnt = 4;
	while (cnt != 0)
	{
		//parsing_tab(argv);
		//true_tetro(argv);
		//error(argv);
		//plcmt(argv);
		conv_letter(argv);
		tetri = ft_define_tetri(argv, c);
		c++;
		cnt--;
	}
	return (tetri);
}
