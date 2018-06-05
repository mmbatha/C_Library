/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:06:49 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/29 12:19:42 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strrchr(const char *str, int lastc)
{
	int length;

	length = ft_strlen(str) + 1;
	while (--length)
	{
		if (str[length] == (char)lastc)
			return ((char *)str + length);
	}
	if (str[length] == (char)lastc)
		return ((char *)str + length);
	return (NULL);
}
