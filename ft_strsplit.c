/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 10:03:16 by mmbatha           #+#    #+#             */
/*   Updated: 2018/06/17 13:35:38 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int				ft_occurs(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

static char				*ft_get_word(char *str, char *character)
{
	int		len;
	char	*word;

	len = 0;
	while (!ft_occurs(str[len], character) && str[len] != '\0')
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);
	word[len] = '\0';
	while (len--)
		word[len] = str[len];
	return (word);
}

static int				ft_slength(char **strlist)
{
	int i;

	i = 0;
	while (strlist && strlist[i])
		i++;
	return (i);
}

static char				**ft_add_word_to_list(char *word, char **list)
{
	int		i;
	char	**templist;

	templist = (char **)malloc(sizeof(char *) * (ft_slength(list) + 2));
	if (templist == NULL)
		return (NULL);
	i = 0;
	while (list != NULL && list[i] != NULL)
	{
		templist[i] = list[i];
		i++;
	}
	templist[i] = word;
	templist[i + 1] = NULL;
	if (list != NULL)
		free(list);
	return (templist);
}

char					**ft_strsplit(char const *str, char character)
{
	int		i;
	char	**list;
	char	*word;

	if (str == NULL)
		return (NULL);
	list = NULL;
	i = 0;
	while (str[i])
	{
		if (!ft_occurs(str[i], &character) && (i == 0 || ft_occurs(str[i - 1], \
						&character)))
		{
			word = ft_get_word((char *)(str + i), &character);
			list = ft_add_word_to_list(word, list);
		}
		i++;
	}
	if (list == NULL)
		return (ft_add_word_to_list(NULL, list));
	return (list);
}
