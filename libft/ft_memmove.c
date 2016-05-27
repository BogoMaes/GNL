/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:09:51 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 20:31:51 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*temp;

	temp = (void *)malloc(sizeof(src[0]) * len);
	if (temp == NULL)
		return (NULL);
	temp = ft_memcpy(temp, src, len);
	dst = ft_memcpy(dst, temp, len);
	return (dst);
}
