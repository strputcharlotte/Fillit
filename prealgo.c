/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prealgo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/10 15:56:19 by emoreau           #+#    #+#             */
/*   Updated: 2017/12/10 16:21:26 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char	*ft_convletter(char *str)
{
	int i;
	int compt;
	char c;

	i = 0;
	compt = 0;
	c = 'A';
	while (str[i])
	{
		if (str[i] == '#')
		{
			str[i] = c;
			compt++;
		}
		if(compt == 4)
		{
			c++;
			compt = 0;
		}
		i++;
	}
	return (str);
}

int		ft_compttetri(char *str)
{
	int i;

	i = ft_strlen(str);
	while (str[i] < 'A' || str[i] > 'Z')
		i--;
	return (str[i] - 'A' + 1);
}

int		ft_sizemin(int nbtetri)
{
	int nbcarre;
	int sizemin;

	sizemin = 2;
	nbcarre = nbtetri * 4;
	while (sizemin * sizemin < nbcarre)
		sizemin++;
	return (sizemin);
}
