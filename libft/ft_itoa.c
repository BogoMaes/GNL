/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:07:45 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:15:59 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*inttop(char *nb)
{
	char	*tab;

	tab = (char *)malloc(sizeof(char) * 12);
	if (tab == NULL)
		return (NULL);
	tab = "-2147483648";
	nb = (char*)malloc(sizeof(char) * 12);
	if (nb == NULL)
		return (NULL);
	ft_strcpy(&nb, tab);
	return (nb);
}

char		*ft_itoa(int n)
{
	char	*nb;
	int		i;
	int		j;

	i = 1;
	j = 0;
	nb = NULL;
	if (n == -2147483648)
	{
		return (inttop(nb));
	}
	if (n < 0)
	{
		i++;
		j++;
		n = -n;
	}
	i += ft_powerten(n);
	nb = (char *)malloc(sizeof(char) * i);
	if (nb != NULL)
		return (ft_nb_generator(n, i, j, nb));
	return (NULL);
}
