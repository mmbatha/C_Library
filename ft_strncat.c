/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:48:10 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/01 08:07:45 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strncat(char *str1, const char *str2, size_t n)
{
	size_t	i;
	int		endstr1;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	endstr1 = i;
	while (str2[i - endstr1] != '\0' && i - endstr1 < n)
	{
		str1[i] = str2[i - endstr1];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
