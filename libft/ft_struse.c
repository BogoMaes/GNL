/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:15:07 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/15 18:11:50 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_struse(char const *s, unsigned int start, size_t len)
{
	char	*use;
	size_t	i;

	use = NULL;
	if (s != NULL)
	{
		use = (char *)malloc(sizeof(char) * (len + 1));
		i = 0;
		if (use != NULL)
		{
			while (i < len && s[start + i])
			{
				use[i] = s[start + i];
				i++;
			}
			use[i] = '\0';
		}
	}
	return (use);
}
