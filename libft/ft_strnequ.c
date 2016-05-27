/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:14:03 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:18:54 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (int)(NULL);
	while (s1[i] && s2[i] && (i < n))
	{
		if (s1[i] >= 'A' && s1[i] <= 'Z')
		{
			if ((s1[i] != s2[i]) && (s1[i] != (s2[i] + 32)))
				return (0);
		}
		else if (s1[i] >= 'a' && s1[i] <= 'z')
		{
			if ((s1[i] != s2[i]) && (s1[i] != (s2[i] - 32)))
				return (0);
		}
		else if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if ((i == ft_strlen(s1) && i == ft_strlen(s2)) || (i == n))
		return (1);
	return (0);
}
