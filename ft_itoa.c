/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:09:16 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/31 07:49:43 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			itoa_negate(int *num, int *neg)
{
	if (*num < 0)
	{
		*num *= -1;
		*neg = 1;
	}
}

char				*ft_itoa(int num)
{
	int		tempnum;
	int		len;
	int		neg;
	char	*str;

	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	tempnum = num;
	len = 2;
	neg = 0;
	itoa_negate(&num, &neg);
	while (tempnum /= 10)
		len++;
	len += neg;
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}
