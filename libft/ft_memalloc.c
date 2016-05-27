/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:09:17 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/17 18:19:13 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = (void *)malloc(size);
	if (mem == NULL)
		return (NULL);
	while (i <= size)
	{
		mem[i] = 0;
		i++;
	}
	return (void *)(mem);
}
