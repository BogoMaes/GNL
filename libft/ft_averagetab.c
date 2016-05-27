/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_averagetab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 23:39:51 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 18:16:05 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_averagetab(int *tab, int length)
{
	int i;
	int max;

	i = 0;
	max = 0;
	if (tab == NULL)
		return ((int)NULL);
	while (tab[i] && i < length)
	{
		max += tab[i];
		i++;
	}
	return (max / i);
}
