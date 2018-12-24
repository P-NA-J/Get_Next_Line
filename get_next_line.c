/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:28:04 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/24 17:58:20 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>
#include <stdlib.h>

void	fill_line(t_list *lst, char **line)
{
	char	*tmp;
	int		index;

	index = 0;
	while (((char *)lst->content)[index] != '\n' &&
	((char *)lst->content)[index] != '\0')
		index += 1;
	if (((char *)lst->content)[0] != '\0')
	{
		*line = ft_strnew(index);
		ft_strncpy(*line, lst->content, index);
		tmp = lst->content;
		if (((char *)lst->content)[0] == '\0')
			return ;
		if (ft_strlen(*line) == ft_strlen(lst->content))
			lst->content = ft_strsub(lst->content, ft_strlen(lst->content), 1);
		else
			lst->content = ft_strsub(lst->content, ft_strlen(*line) + 1,
			ft_strlen(lst->content) - ft_strlen(*line) - 1);
		free(tmp);
	}
}

int		ft_read(t_list *lst, char **line, int fd)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;

	ft_bzero(buff, BUFF_SIZE + 1);
	while (!ft_strchr(buff, '\n'))
	{
		if ((ret = read(fd, buff, BUFF_SIZE)) < 0)
			return (-1);
		buff[ret] = 0;
		lst->content = ft_strjoinf((char *)lst->content, buff, 1);
		if (ret == 0)
			break ;
	}
	if (((char *)lst->content)[0] == '\0' && ret == 0)
		return (0);
	fill_line(lst, line);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*lst;

	if (!line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (!lst)
	{
		if (!(lst = ft_lstnew(NULL, fd)))
			return (-1);
		lst->content_size = fd;
	}
	return (ft_read(lst, line, fd));
}
