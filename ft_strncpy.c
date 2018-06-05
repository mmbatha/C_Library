/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:57:41 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/31 16:52:12 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char			*ft_strncpy(char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		endstr1;

	i = 0;
	endstr1 = 0;
	while (i < n)
	{
		if (str2[i] != '\0' && !endstr1)
			str1[i] = str2[i];
		else
		{
			str1[i] = '\0';
			endstr1 = 1;
		}
		i++;
	}
	return (str1);
}
