/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:13:25 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/31 16:27:01 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(const char *str1)
{
	int		i;
	size_t	length;
	char	*str2;

	i = 0;
	if (str1 == NULL)
		return (NULL);
	length = ft_strlen(str1);
	str2 = (char *)malloc(sizeof(char) * (length + 1));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (str1[i])
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}
