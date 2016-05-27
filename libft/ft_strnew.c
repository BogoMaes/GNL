/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:14:25 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/14 18:34:34 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*mem;
	size_t	i;

	i = 0;
	mem = (char *)malloc(sizeof(char) * (size + 1));
	if (mem == NULL)
		return (NULL);
	while (i <= (size + 1))
	{
		mem[i] = '\0';
		i++;
	}
	return (void *)(mem);
}
