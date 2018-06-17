/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:23:50 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/05 10:17:28 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strmapi(char const *str, char (*func)(unsigned int, char))
{
	int		i;
	char	*m_str;

	if (str == NULL || func == NULL)
		return (NULL);
	m_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (m_str == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
	{
		m_str[i] = func(i, str[i]);
	}
	m_str[i] = '\0';
	return (m_str);
}
