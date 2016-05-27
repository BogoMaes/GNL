/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:11:01 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:17:21 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr2(unsigned int n)
{
	if (n >= 10)
		ft_putnbr2(n / 10);
	ft_putchar((n % 10) + '0');
}

void			ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr2(-n);
	}
	else
		ft_putnbr2(n);
}
