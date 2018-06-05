/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:28:59 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 16:12:55 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strcmp(const char *str1, const char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 < *str2)
			return (*str1 - *str2);
		if (*str1 > *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
