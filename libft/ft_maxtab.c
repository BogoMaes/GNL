/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:09:06 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 19:02:55 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_maxtab(int *tab)
{
	int i;
	int max;

	i = 0;
	max = 0;
	if (tab == NULL)
		return ((int)NULL);
	while (tab[i])
	{
		i++;
		if (tab[i] > max)
			max = tab[i];
	}
	return (max);
}
