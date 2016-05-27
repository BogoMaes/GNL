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
#include <fcntl.h>
#include "get_next_line.h"

static char *ret_str(char **str, int fd, char **bsn, char ***line)
{
	char	*tmp;
	int		i;

//	//putendl("truc du i chelou");
	i = &(**bsn) - &(**str);
//	//putendl("line ");
	**line = (char*)malloc(i + 1);
	//ft_putnbr(i);
	//putendl("line malloc");
	//putendl(*str);
	**line = ft_strncpy(**line, *str, i);
	//putendl("line fin");
	//putendl("tmp");
	i = ft_strlen(*str) - i;
	tmp = (char*)malloc(i);
	//ft_putnbr(i);
//	tmp[1] = 'l';
//	//putendl(tmp);
	//putendl(&(**bsn) + 1);
	//putendl("lollololol");
	tmp = ft_strcpy(tmp, &(**bsn) + 1);
	//putendl("tmp fin");
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
	int				r;

	i = 0;
	buf = ft_memalloc(BUFF_SIZE + 1);
	r = read(fd, buf, BUFF_SIZE);
	str = (char *)malloc(strlen(buf + 1));
	str = ft_strcpy(str, buf);
	//putendl(str);
	//putendl("Premier strschr celui du if au ebut pour do while");
	bsn = ft_strchr(str, '\n');
	if (bsn)
		str = ret_str(&str, fd, &bsn, &line);
	//putendl("Le While d'apres");
	while (!bsn)
	{
		r = read(fd, buf, BUFF_SIZE);
		bsn = ft_strchr(str, '\n');
		//putendl("if(bsn )l69");
		if (bsn)
		{
			//putendl("l 72 if(bsn)");
			str = ret_str(&str, fd, &bsn, &line);
			return (1);
		}else if(r < BUFF_SIZE)
		{
			//putendl("else if l77");
			*line = (char*)malloc(ft_strlen(str));
			*line = ft_strcpy(*line, str);
			free (str);
			return(0);
		}

		if (r == -1)
			return (-1);
		str = ft_strjoin(str, buf);
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
