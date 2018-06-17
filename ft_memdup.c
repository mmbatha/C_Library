/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 08:40:22 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/05 10:12:20 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void			*ft_memdup(const void *s, size_t n)
{
	void *new;

	if ((new = malloc(sizeof(unsigned char) * n)) == NULL)
	{
		return (NULL);
		free(new);
	}
	ft_memcpy(new, s, n);
	return (new);
}
