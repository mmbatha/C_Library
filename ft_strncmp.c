/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 11:44:57 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 11:17:23 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t i;

	i = -1;
	if (size == 0)
	{
		return (0);
	}
	while ((*str1 || *str2) && *str1 && size)
	{
		if (*str1 != *str2)
		{
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		}
		str1++;
		str2++;
	}
	return (0);
}
