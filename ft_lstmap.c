/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 11:02:08 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/06 11:16:45 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list			*ft_lstmap(t_list *list, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*nlist;

	if (!list)
		return (NULL);
	nlist = f(list);
	new = nlist;
	while (list->next)
	{
		list = list->next;
		if (!(nlist->next = f(list)))
		{
			free(nlist->next);
			return (NULL);
		}
		nlist = nlist->next;
	}
	return (new);
}
