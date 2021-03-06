/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_bit_to_zero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:46:21 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:31:37 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	put_bit_to_zero(char *c, char nu)
{
	unsigned char	c_buff;

	c_buff = 1;
	*c = (*c & (~(c_buff << nu)));
}
