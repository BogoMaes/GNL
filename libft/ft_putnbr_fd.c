/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:11:06 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/11 00:17:22 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putnbr2_fd(unsigned int n, int fd)
{
	if (n >= 10)
		ft_putnbr2_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void			ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr2_fd(-n, fd);
	}
	else
		ft_putnbr2_fd(n, fd);
}
