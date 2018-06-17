/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:33:16 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/13 09:14:55 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(char const *str1, char const *str2)
{
	if (str1 == NULL || str2 == NULL)
		return (0);
	else
	{
		while (*str1 != '\0' || *str2 != '\0')
		{
			if (*str1 != *str2)
				return (0);
			str1++;
			str2++;
		}
		return (1);
	}
	return (0);
}
