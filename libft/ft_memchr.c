/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 10:19:01 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:26:43 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*s_buff;

	s_buff = (unsigned char*)s;
	index = 0;
	if (!s)
		return (NULL);
	while (index < n || s_buff[index] != 0)
	{
		if (s_buff[index] == (unsigned char)c)
			return (&((void*)s)[index]);
		index += 1;
	}
	return (NULL);
}
