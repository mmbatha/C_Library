/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:28:59 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 16:13:16 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(const char *str1, const char *str2)
{
	unsigned char	*s1;
	unsigned char	*s2;
	int				s1_len;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	s1_len = ft_strlen((char *)s1);
	if (!s1_len && !ft_strlen((char *)s2))
		return (0);
	if (!*str1 || s1_len < (signed int)ft_strlen((char *)str2))
		return (-1);
	while (s1_len--)
	{
		if (*str1 != *str2)
		{
			if (*str1 > *str2)
				return (1);
			else
				return (-1);
		}
		str1++;
		str2++;
	}
	return (0);
}
