/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 06:53:27 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/30 08:35:53 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_striter(char *str, void (*func)(char *))
{
	if (str == NULL || func == NULL)
		return ;
	while (str != NULL && *str)
		func(str++);
}
