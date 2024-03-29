/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:12:40 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/05 14:25:39 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strsub(char const *str, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if ((int)len < 0)
		return (NULL);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	if (str != NULL && len != 0 && sub)
	{
		if (!sub)
			return (0);
		while (i < len)
		{
			*(sub + i) = *(str + start);
			start++;
			i++;
		}
	}
	*(sub + i) = '\0';
	return (sub);
}
