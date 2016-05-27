/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_divtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:02:03 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 17:57:34 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_divtab(const int the_number)
{
	int i;
	int j;
	int *vec;

	j = 0;
	i = 1;
	vec = (int *)malloc(sizeof(int) * ft_divcount(the_number));
	while (i <= the_number / 2)
	{
		if (the_number % i == 0)
		{
			vec[j] = i;
			j++;
		}
		i++;
	}
	if (the_number != 1)
	{
		vec[j] = the_number;
	}
	return (vec);
}
