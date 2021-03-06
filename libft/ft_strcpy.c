/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:11:46 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/04/01 18:20:22 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char **dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		(*dst)[i] = src[i];
		i++;
	}
	(*dst)[i] = '\0';
}
