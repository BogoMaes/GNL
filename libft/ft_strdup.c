/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:12:00 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/17 17:41:32 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *s2;

	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!s2)
		return (NULL);
	return (ft_strcpy(s2, s1));
}
