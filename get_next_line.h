/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdirlewa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/11 10:56:59 by gdirlewa          #+#    #+#             */
/*   Updated: 2016/05/27 16:35:43 by gdirlewa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define BUFF_SIZE 10

int get_next_line(int const fd, char **line);

#endif
