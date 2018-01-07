/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/02 17:29:34 by emoreau           #+#    #+#             */
/*   Updated: 2018/01/07 13:31:22 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	**ft_define_tetri(char **fichier_alltetri, char c)
{
	char **tetri;
	int i;
	int j;

	i = 0;
	j = 0;
	ft_convletter(call_fonctions(**fichier_alltetri));
	while (fichier_alltetri[i])
	{
		if (fichier_alltetri[i] == c)
			tetri[j] = fichier_alltetri[i];
		i++;
		j++;
	}
	return (tetri);
}
