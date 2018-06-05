/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 06:44:24 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/31 16:35:20 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int				ft_specialchar(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '+' || c == '\v' \
			|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int						ft_atoi(const char *str)
{
	int result;
	int negative;
	int newline;

	result = 0;
	negative = 0;
	newline = 0;
	while (ft_specialchar(*str) || ft_isdigit(*str) || *str == '-')
	{
		if (*str == '-' && (newline || negative))
			break ;
		if (*str == '-' && !negative)
			negative = 1;
		if (ft_specialchar(*str) && (newline || negative))
			break ;
		if (ft_isdigit(*str))
		{
			newline = 1;
			result = result * 10 + *str - '0';
		}
		str++;
	}
	if (negative)
		result *= -1;
	return (result);
}
