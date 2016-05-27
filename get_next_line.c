/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/20 00:50:54 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/05/27 16:42:19 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"


int	get_next_line(int const fd, char **line)
{
	static char			*str;
	int				i;
	char			*bsn;
	char			*buf;
	int				r;
	char	*tmp;
	int		j;

	i = 0;
	buf = ft_memalloc(BUFF_SIZE + 1);
	if(!(str))
		str = (char *)ft_memalloc(BUFF_SIZE + 1);
	while (!bsn)
	{
		r = read(fd, buf, BUFF_SIZE);
		str = ft_strjoin(str, buf);
		bsn = ft_strchr(str, '\n');
		if (bsn)
		{
			j = bsn - str;
			tmp = (char *)ft_memalloc(ft_strlen(bsn)+1);
			tmp = ft_memmove(tmp, bsn + 1, ft_strlen(bsn) - 1);
			*line = (char*)ft_memalloc(j + 1);
			*line = ft_strncpy(*line, (str), j);
			j = ft_strlen(str) - j;
			str = (char *)ft_memalloc(j + 1);
			str = ft_memmove(str, tmp, j);
			return (1);
		}
		else if(r < BUFF_SIZE)
		{
			*line = (char*)malloc(ft_strlen(str));
			ft_strcpy(line, str);
			free (str);
			return(0);
		}
		if (r == -1)
			return (-1);
	}
	return (-1);
}
int	main(int ac, char **av)
{
	int		result;
	char	*line;
	char	*reline;
	int		fd;

	if(ac == 1)
	{
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &reline))
	{
		ft_putendl(reline);
		free(reline);
	}
	return (result);
}
