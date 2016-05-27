/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:12:37 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:18:39 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	if (size > len)
	{
		while (i < (size - len - 1))
		{
			dst[len + i] = src[i];
			i++;
		}
		dst[len + i] = '\0';
		return (ft_strlen(src) + len);
	}
	return (ft_strlen(src) + size);
}
