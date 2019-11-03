/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 10:33:16 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:28:17 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <unistd.h>

void	ft_putstr(char const *s)
{
	size_t	count;

	if (!s)
		return ;
	count = ft_strlen(s);
	write(1, s, count);
}
