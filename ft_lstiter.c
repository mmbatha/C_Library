/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:17:53 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/05 09:20:18 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstiter(t_list *list, void (*f)(t_list *elem))
{
	t_list *next;

	while (list)
	{
		next = list->next;
		f(list);
		list = next;
	}
}
