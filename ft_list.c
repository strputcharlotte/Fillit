/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 19:46:49 by cfarjane          #+#    #+#             */
/*   Updated: 2017/12/18 19:55:53 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

typedef struct		t_list
{
	int x;
	int y;
}					s_list;

char				**list_tetri(char c, t_list all_tetri)
{
	char**tab;

	if (true_tetro(tab) == 0)
		error_exit("Error", 200);

	return (tab);
}
