/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pauljull <pauljull@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 08:42:11 by pauljull          #+#    #+#             */
/*   Updated: 2018/12/31 17:27:11 by pauljull         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

void	ft_print_lst_str(t_list *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_putendl(lst->content);
		lst = lst->next;
	}
}
