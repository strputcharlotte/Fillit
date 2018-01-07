/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_letter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfarjane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/07 17:44:26 by cfarjane          #+#    #+#             */
/*   Updated: 2018/01/07 18:39:05 by cfarjane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

char		**conv_letter(char **tab)
{
	int		i;
	int		compt;
	char	c;

	i = 0;
	compt = 0;
	c = 'A';
	while (**tab)
	{
		if (*tab[i] == '#')
		{
			*tab[i] = c;
			compt++;
		}
		if(compt == 4)
		{
			c++;
			compt = 0;
		}
		i++;
	}
	return (tab);
}
