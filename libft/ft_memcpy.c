/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:09:37 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/03/08 18:04:29 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst2;
	const char		*src2;

	dst2 = dst;
	src2 = src;
	i = 0;
	while (i < n)
	{
		*dst2++ = *src2++;
		i++;
	}
	return (dst);
}
