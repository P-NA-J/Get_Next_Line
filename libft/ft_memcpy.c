/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 16:57:11 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:26:53 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	index = 0;
	if (!dst || !src)
		return (NULL);
	while (index < n)
	{
		((unsigned char *)dst)[index] = ((unsigned char *)src)[index];
		index += 1;
	}
	return (dst);
}
