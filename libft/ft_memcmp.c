/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 11:04:16 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:26:48 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (!s1 || !s2)
		return (0);
	while (index < n)
	{
		if (((unsigned char*)s1)[index] != ((unsigned char*)s2)[index])
			return (((unsigned char*)s1)[index] - ((unsigned char*)s2)[index]);
		index += 1;
	}
	return (0);
}
