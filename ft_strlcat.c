/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:48:10 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/04 13:01:00 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	endstr1;

	i = 0;
	if (n <= ft_strlen(str1))
		return (n + ft_strlen(str2));
	while (str1[i] && i < n)
	{
		i++;
	}
	endstr1 = i;
	while (str2[i - endstr1] && i < n - 1)
	{
		str1[i] = str2[i - endstr1];
		i++;
	}
	if (endstr1 < n)
	{
		str1[i] = '\0';
	}
	return (endstr1 + ft_strlen(str2));
}
