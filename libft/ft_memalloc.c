/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:32:30 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:26:28 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*memory;

	if (!(memory = (void*)malloc(sizeof(memory) * size)))
		return (NULL);
	ft_memset(memory, 0, size);
	return (memory);
}
