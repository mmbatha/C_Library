/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:06:49 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 12:18:16 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strchr(const char *str, int firstc)
{
	while (*str)
	{
		if (*str == (char)firstc)
			return ((char *)str);
		str++;
	}
	if (*str == (char)firstc)
		return ((char *)str);
	return (NULL);
}
