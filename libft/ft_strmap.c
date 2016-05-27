/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:12:59 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/14 18:26:56 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	int		i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	map = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (map == NULL)
		return (NULL);
	while (s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
