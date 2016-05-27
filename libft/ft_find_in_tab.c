/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:05:24 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 18:19:11 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_in_tab(int *vec, int n, int length)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (vec == NULL)
		return ((int)NULL);
	while (vec[i] && i < length)
	{
		if (vec[i] == n)
			j++;
		i++;
	}
	return (j);
}
