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

static char *ret_str(char **str, int fd, char **bsn, char ***line)
{
	char	*tmp;
	int		i;

	i = &(**bsn) - &(**str);
	**line = (char*)malloc(i + 1);
	**line = ft_strncpy(**line, *str, i);
	i = ft_strlen(*str) - i;
	tmp = (char*)malloc(i);
	tmp = ft_strcpy(tmp, &(**bsn) + 1);
	free (*str);
	*str = (char*)malloc(2);
	*str = ft_strjoin(*str, tmp);
	free (tmp);
	return (*str);
}
int	get_next_line(int const fd, char **line)
{
	static char			*str;
	int				i;
	char			*bsn;
	char			*buf;
	char			*tmp;
	int				r;
	int lapin = 0;

	i = 0;
	ft_putendl("lapin");
	buf = ft_memalloc(BUFF_SIZE + 1);
	r = read(fd, buf, BUFF_SIZE);
	str = (char *)ft_memalloc(BUFF_SIZE + 1);
	str = ft_strcpy(str, buf);
	//putendl(str);
	//putendl("Premier strschr celui du if au ebut pour do while");
	bsn = ft_strchr(str, '\n');
	ft_putendl("1");
	if (bsn)
		str = ret_str(&str, fd, &bsn, &line);
	//putendl("Le While d'apres");
	while (!bsn)
	{
		ft_putendl("2");
		r = read(fd, buf, BUFF_SIZE);
		bsn = ft_strchr(str, '\n');
		//putendl("if(bsn )l69");
		if (bsn)
		{
			ft_putendl("3");
			//putendl("l 72 if(bsn)");
			str = ret_str(&str, fd, &bsn, &line);
			return (1);
		}else if(r < BUFF_SIZE)
		{
			ft_putendl("4");
			//putendl("else if l77");
			*line = (char*)malloc(ft_strlen(str));
			*line = ft_strcpy(*line, str);
			free (str);
			return(0);
		}
		lapin++;
		if (r == -1)
			return (-1);
		ft_putstr("r = ");
		ft_putnbr(r);
		printf("\nbuff = |%s|\nstr = |%s|\nlapin = %d\n", buf, str,lapin);
		tmp = ft_strjoin(str, buf);
		ft_putendl("b");
		str = tmp;
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
		//putendl("pov con");
		return (-1);
	}
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &reline))
	{
	//	ft_putendl("iteration main");
		ft_putendl(reline);
		free(reline);
	}
	return (result);
}
