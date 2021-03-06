/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:14:59 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:19:30 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')) && s[i])
		i++;
	j = ft_strlen(s) - 1;
	while (((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t')) && (j > i))
		j--;
	return (ft_struse(s, i, (j - i + 1)));
}
