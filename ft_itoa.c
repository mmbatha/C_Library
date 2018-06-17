/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 08:09:16 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 11:22:49 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void			itoa_negate(int *num, int *negative)
{
	if (*num < 0)
	{
		*num *= -1;
		*negative = 1;
	}
}

char				*ft_itoa(int num)
{
	int		tempnum;
	int		len;
	int		negative;
	char	*str;

	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	tempnum = num;
	len = 2;
	negative = 0;
	itoa_negate(&num, &negative);
	while (tempnum /= 10)
		len++;
	len += negative;
	if ((str = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	if (negative)
		str[0] = '-';
	return (str);
}
