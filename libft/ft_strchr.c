/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:11:28 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/04/04 00:40:21 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ts;

	i = 0;
	ts = (char *)s;
	while (ts[i])
	{
		if (ts[i] == (char)c)
			return (&(ts[i]));
		i++;
	}
	if (ts[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}
