/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 23:40:21 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 17:49:49 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_divcount(int the_number)
{
	int i;
	int hmdiv;
	int j;

	hmdiv = 0;
	i = 1;
	j = the_number / 2;
	while (i <= j)
	{
		if (the_number % i == 0)
		{
			hmdiv++;
		}
		i++;
	}
	if (the_number != 1)
	{
		hmdiv++;
	}
	return (hmdiv);
}
