/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 08:04:49 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/11 11:34:19 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*ft_memccpy(void *str1, const void *str2, int c, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	dest = (char *)str1;
	src = (char *)str2;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
