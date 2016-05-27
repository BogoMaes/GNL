/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mintab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:10:05 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 18:14:13 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mintab(int *tab)
{
	int i;
	int min;

	i = 0;
	min = 0;
	if (tab == NULL)
		return ((int)NULL);
	while (tab[i])
	{
		i++;
		if (tab[i] < min)
			min = tab[i];
	}
	return (min);
}
