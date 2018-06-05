/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 07:03:16 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/30 08:36:51 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striteri(char *str, void (*func)(unsigned int, char *))
{
	unsigned int i;

	if (str == NULL || func == NULL)
		return ;
	i = -1;
	while (str[++i])
	{
		func(i, str + i);
	}
}
