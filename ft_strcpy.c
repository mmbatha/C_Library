/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 14:34:30 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/31 15:47:03 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcpy(char *str1, const char *str2)
{
	int i;

	i = 0;
	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
