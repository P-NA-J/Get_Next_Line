/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:26:27 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:28:20 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	index;
	size_t	s1_len;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	while (s2[index] != 0)
	{
		s1[index + s1_len] = s2[index];
		index += 1;
	}
	s1[index + s1_len] = 0;
	return (s1);
}
