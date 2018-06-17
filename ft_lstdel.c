/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:01:14 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/13 10:52:50 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_lstdel(t_list **alist, void (*del)(void *, size_t))
{
	t_list *next;

	while (*alist)
	{
		next = (*alist)->next;
		ft_lstdelone(alist, del);
		*alist = next;
	}
}
