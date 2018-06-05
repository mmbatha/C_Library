/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:39:14 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 15:48:46 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *str1, const char *str2)
{
	int i;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	while (*str1)
	{
		if (*str1 == str2[i])
			i++;
		else
			i = 0;
		if (str2[i] == '\0')
			return ((char *)(str1 - i + 1));
		str1++;
	}
	return (NULL);
}
