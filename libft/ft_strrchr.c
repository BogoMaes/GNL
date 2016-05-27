/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:14:37 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:19:06 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ts;

	ts = (char *)s;
	i = ft_strlen(ts);
	while (i >= 0)
	{
		if (s[i] == c)
			return (ts + i);
		i--;
	}
	return (NULL);
}
