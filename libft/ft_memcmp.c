/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:09:34 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/14 17:56:42 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*temps1;
	unsigned char	*temps2;

	temps1 = (unsigned char *)s1;
	temps2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (temps1[i] != temps2[i])
			return (temps1[i] - temps2[i]);
		i++;
	}
	return (0);
}
