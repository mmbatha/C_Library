/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:53:17 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/13 10:53:24 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			ft_lstdelone(t_list **alist, void (*del)(void *, size_t))
{
	del((*alist)->content, (*alist)->content_size);
	free(*alist);
	*alist = NULL;
}
