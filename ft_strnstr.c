/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:58:30 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 15:48:25 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *str1, const char *str2, size_t len)
{
	size_t i;
	size_t j;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	j = 0;
	while (str1[i] != '\0' && len-- >= ft_strlen(str2))
	{
		while (str2[j])
		{
			if (str1[i + j] == str2[j])
				j++;
			else
			{
				j = 0;
				break ;
			}
		}
		if (str2[j] == '\0')
			return ((char *)(str1 + i));
		i++;
	}
	return (NULL);
}
