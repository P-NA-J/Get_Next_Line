/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 17:28:04 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:33:07 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H

# include "./libft/includes/libft.h"
# define BUFF_SIZE 10

int		get_next_line(const int fd, char **line);
void	fill_line(t_list *lst, char **line);
int		ft_read(t_list *lst, char **line, int fd);
t_list	*fd_management(t_list *lst, int fd);
#endif
