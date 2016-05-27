/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 00:08:16 by gdirlewa          #+#    #+#             */
/*   Updated: 2015/12/14 17:40:02 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alist, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (alist != NULL)
	{
		while (*alist != NULL)
		{
			tmp = NULL;
			if ((*alist)->next != NULL)
				tmp = (*alist)->next;
			ft_lstdelone(alist, del);
			*alist = tmp;
		}
		*alist = NULL;
	}
}
