/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:12 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:28:14 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	count;

	if (!s || fd < 0)
		return ;
	count = ft_strlen(s);
	write(fd, s, count);
	write(fd, "\n", 1);
}
