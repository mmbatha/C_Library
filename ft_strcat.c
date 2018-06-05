/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 10:48:10 by mmbatha           #+#    #+#             */
/*   Updated: 2018/05/29 10:54:42 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char			*ft_strcat(char *str1, const char *str2)
{
	int	i;
	int	last_char;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	last_char = i;
	while (str2[i - last_char] != '\0')
	{
		str1[i] = str2[i - last_char];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
