/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 13:03:13 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:29:50 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	index;

	index = 0;
	if (!dst || !src)
		return (NULL);
	while (index < len && src[index] != 0)
	{
		dst[index] = src[index];
		index += 1;
	}
	while (index < len)
		dst[index++] = 0;
	return (dst);
}
