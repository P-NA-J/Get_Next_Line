/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:28:04 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/16 18:32:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <stdio.h>


/*

************* ETAT DE LA FONCTION ***************

*** La fonction reussit bien a isoler une ligne et a la stocker dans line apres
*** des appels successifs de GNL. Le \n est transformé par un \0.

*** Le multi fd est pas encore géré et le programme renvoie un \n quand il en
*** lis un si aucun caractere ne le precede et renvoie toujours le dernier \n si
*** aucun caractere ne le suis a la fin du fichier (surement un truc a fix au
*** niveau du return (0)).
*** probleme de read en fonction du BUFF_SIZE

*/






void	fill_line(t_list *lst, char **line)
{
	char	*tmp;
	int		index;

	index = 0;
	while (((char *)lst->content)[index] != '\n' && ((char *)lst->content)[index] != '\0')
		index += 1;
	*line = ft_strnew(index);
	ft_strncpy(*line, lst->content, index);
	tmp = lst->content;
	lst->content = ft_strsub(lst->content, ft_strlen(*line) + 1, ft_strlen(lst->content) - ft_strlen(*line));
}

int		ft_read(t_list *lst, char **line, int fd)
{
	char			buff[BUFF_SIZE + 1];
	int				ret;

	while (!ft_strchr(buff, '\n'))
	{
		ret = read(fd, buff, BUFF_SIZE);
		buff[ret] = 0;
		if (ret == 0)
			break ;
		lst->content = ft_strjoinf((char *)lst->content, buff, 1);
	}
	fill_line(lst, line);
	if (ret < BUFF_SIZE)
		return (0);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*lst;

	if (!line || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (lst)
	{
		if (ft_strchr(lst->content, '\n'))
		{
			fill_line(lst, line);
			return (1);
		}
		return (ft_read(lst, line, fd));
	}
	if (!lst)
	{
		if (!(lst = ft_lstnew(NULL, fd)))
			return (-1);
		lst->content_size = fd;
		return (ft_read(lst, line, fd));
	}
	return (1);
}
