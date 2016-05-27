/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:12:31 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/04/01 16:53:34 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	ft_putendl("rien");
	int		i;
	int		j;
	char	*join;

	i = -1;
	j = 0;
	join = NULL;
	if (s1 != NULL && s2 != NULL)
	{
		join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
		if (join != NULL)
		{
			ft_putendl("y");
			while (s1[++i] != '\0')
			{
				ft_putnbr(i);
				ft_putendl("");
				join[i] = s1[i];
			}
			while (s2[j])
			{
				ft_putendl("z");
				join[i + j] = s2[j];
				j++;
			}
			join[i + j] = '\0';
		}
	}
	ft_putendl("xyz");
	return (join);
}
