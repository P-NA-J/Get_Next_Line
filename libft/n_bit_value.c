/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   n_bit_value.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:46:54 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:31:10 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int		n_bit_value(char c, char nu)
{
	unsigned char	c_buff;

	c_buff = 1;
	if (c & (c_buff << nu))
		return (1);
	else
		return (0);
}