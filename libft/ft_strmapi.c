/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:13:03 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/14 18:29:02 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		map[i] = f(i, s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
