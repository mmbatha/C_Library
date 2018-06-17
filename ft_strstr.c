/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 12:39:14 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 15:26:37 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strstr(const char *str1, const char *str2)
{
	int	i;
	int j;

	if (*str2 == '\0')
		return ((char *)str1);
	i = 0;
	j = 0;
	while (str1[i])
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
