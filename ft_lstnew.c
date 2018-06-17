/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:29:35 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/13 10:53:59 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	if ((new = (t_list *)malloc(sizeof(t_list))) == NULL)
	{
		free(new);
		return (NULL);
	}
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = ft_memdup(content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
