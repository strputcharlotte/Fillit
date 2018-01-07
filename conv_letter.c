/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_letter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 17:44:26 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 19:27:52 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char		**conv_letter(char **tab)
{
	int		i;
	int		j;
	int		compt;
	char	c;

	i = 0;
	j = 0;
	compt = 0;
	c = 'A';
	while (tab[j])
	{
		while(tab[j][i])
		{
			if (tab[j][i] == '#')
			{
				tab[j][i] = c;
				compt++;
			}
			if(compt == 4)
			{
				c++;
				compt = 0;
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (tab);
}
