/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:58:30 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 15:32:25 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	while (*str1 && len)
	{
		if (*str1 == str2[i])
			i++;
		else
			i = 0;
		if (str2[i] == '\0')
			return ((char *)(str1 - i + 1));
		str1++;
		len--;
	}
	return (NULL);
}
