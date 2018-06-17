/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:54:44 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/05 10:19:10 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char			*ft_strtrim(char const *str)
{
	int		i;
	int		len;
	char	*t_str;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	while (str[len - 1] == ' ' || str[len - 1] == '\t' || str[len - 1] == '\n')
		len--;
	i = -1;
	while (str[++i] == ' ' || str[i] == '\t' || str[i] == '\n')
		len--;
	if (len <= 0)
		len = 0;
	t_str = (char *)malloc(sizeof(char) * (len + 1));
	if (t_str == NULL)
		return (NULL);
	str += i;
	i = -1;
	while (++i < len)
		t_str[i] = *str++;
	t_str[i] = '\0';
	return (t_str);
}
