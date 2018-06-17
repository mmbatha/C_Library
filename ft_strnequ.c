/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:37:55 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 12:50:49 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strnequ(char const *str1, char const *str2, size_t n)
{
	if (str1 == NULL || str2 == NULL)
		return (0);
	if (!ft_strncmp(str1, str2, n))
		return (1);
	return (0);
}
