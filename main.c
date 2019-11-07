/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmbatha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:52:42 by mmbatha           #+#    #+#             */
/*   Updated: 2019/11/07 17:30:44 by mmbatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

static void			ft_strcmptest(void)
{
	char *s1;
	char *s2;
	int i1;
	int i2;

	s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	s2 = "\x12\x02";
	i1 = ((strcmp(s1, s2) > 0) ? 1: ((strcmp(s1, s2) < 0) ? -1 : 0));
	i2 = ((ft_strcmp(s1, s2) > 0) ? 1: ((ft_strcmp(s1, s2) < 0) ? -1 : 0));

	ft_putendl("\n|******ft_strcmp******|");
	printf("|%i|\n", i1);
	printf("|%i|\n", i2);
}

static void			ft_atoitest(void)
{
	int val;
	char str[20];
	
	printf("\n|******ft_atoi******|\n");
	
	ft_strcpy(str, "98993489");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
	ft_strcpy(str, "tutorialspoint.com");
	val = ft_atoi(str);
	printf("String value = %s, Int value = %d\n", str, val);
}

static void				ft_memccpytest(void)
{
	char buff1[] = "abcdefghijklmnopqrstuvwxyz";
	char buff2[] = "abcdefghijklmnopqrstuvwxyz";
	char *src = "string with\200inside!";

	memccpy(buff2, src, 0600, 21);
	ft_memccpy(buff1, src, 0600, 21);

	ft_putendl("\n|******ft_memccpy******|");

	printf("After memccpy buff2 = %s\n", buff2);
	printf("After ft_memccpy buff1 = %s\n", buff1);
}

static void			ft_memcmptest()
{
	char str1[15];
	char str2[15];
	int ret;

	ft_memcpy(str1, "abcdef", 6);
	ft_memcpy(str2, "ABCDEF", 6);

	ret = ft_memcmp(str1, str2, 5);

	ft_putendl("\n|******ft_memcmp******|");
	if (ret > 0)
	{
		ft_putendl("str2 is less than str1");
	}
	else if (ret < 0)
	{
		ft_putendl("str1 is less than str2");
	}
	else
	{
		ft_putendl("str1 is equal to str2");
	}
}

static void				ft_memcpytest(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];

	ft_putendl("\n|******ft_memcpy******|");

	ft_strcpy(dest, "Helloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src) + 1);
	printf("After memcpy dest = %s\n", dest);
}

static void				ft_memmovetest(void)
{
	char dest1[] = "oldstring";
	char dest2[] = "oldstring";
	const char src[] = "newstring";
	int size;

	size = 9;
	ft_putendl("\n|******ft_memmove******|");

	printf("Before memmove dest1 = %s, src = %s\n", dest1, src);
	memmove(dest1, src, size);
	ft_memmove(dest2, src, size);
	printf("After memmove dest1 = %s, src = %s\n", dest1, src);
	printf("After ft_memmove dest2 = %s, src = %s\n", dest2, src);
}

static void			ft_putchartest(void)
{
	char ch;

	ch = 'A';

	printf("\n|******ft_putchar******|\n");
	while (ch <= 'Z')
	{
		ft_putchar(ch);
		ch++;
	}
	ft_putchar('\n');
}

static void			ft_putchar_fdtest(void)
{
	char ch;

	ch = 'A';
	ft_putstr("\n|******ft_putchar_fd******|\n");
	while (ch <= 'Z')
	{
		ft_putchar_fd(ch, 1);
		ch++;
	}
	ft_putchar_fd('\n', 1);
}

static void				ft_putendltest(void)
{
	ft_putendl("\n|******ft_putendl******|");
	ft_putendl("Silence! I kill you!");
}

static void			ft_putendl_fdtest(void)
{
	ft_putendl("\n|******ft_putendl_fd******|");
	ft_putendl_fd("TESTED HERE!", 1);
}

static void			ft_putstrtest(void)
{
	char str[15];

	printf("\n|******ft_putstr******|\n");

	ft_strcpy(str, "tutorialspoint");

	ft_putstr(str);
	ft_putchar('\n');
}

static void			ft_putstr_fdtest(void)
{
	char str[15];

	printf("\n|******ft_putstr_fd******|\n");

	ft_strcpy(str, "tutorialspoint");

	ft_putstr_fd(str, 1);
	ft_putchar('\n');
}

static void				ft_strclrtest(void)
{
	char str[15];

	ft_putendl("\n|******ft_strclr******|\n");

	ft_strcpy(str, "tutorialspoint");
	printf("String before strclr: %s\n", str);
	
	ft_strclr(str);
	printf("String after strclr: %s\n", str);
}

static void			ft_strduptest(void)
{
	char src[] = "Tutorials Point";
	char *dest = ft_strdup(src);

	ft_putendl("\n|******ft_strdup******|");
	printf("Final duplicated string: %s\n", dest);
}

static void			ft_strsubtest(void)
{
	char str[] = "Hello, World!";
	char *sub;

	printf("\n|******ft_strsub******|\n");
	sub = ft_strsub(str, 0, 5);
	ft_putstr(sub);
	ft_putchar('\n');
	free(sub);
}

static void				ft_strncpytest(void)
{
	char src[40];
	char dest[12];

	ft_memset(dest, '\0', sizeof(dest));
	ft_strcpy(src, "This is tutorialspoint.com");
	ft_strncpy(dest, src, 10);

	ft_putendl("\n|******ft_strncpy******|");
	printf("Final copied string: %s\n", dest);
}

static void			ft_strlcattest(void)
{
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
	char buff1[0xF00] = "there is no stars in the sky";
	char buff2[0xF00] = "there is no stars in the sky";
	size_t max = 0;

	ft_putendl("\n|******ft_strlcat******|");
	ft_strlcat(buff2, str, max);
	strlcat(buff1, str, max);
	printf("ft_strlcat's buff: %s\n", buff2);
	printf("strlcat's buff: %s\n", buff1);
}

static void				ft_strstrtest(void)
{
	char *s1;
	char *s2;
	char *i1;
	char *i2;

	s1 = "MZIRIBMZIRIBMZP";
	s2 = "MZIRIBMZP";
	i1 = strstr(s1, s2);
	i2 = ft_strstr(s1, s2);

	ft_putendl("\n|******ft_strstr******|");
	printf("The strstr substring is: %s\n", i1);
	printf("The ft_strstr substring is: %s\n", i2);
}

static void		ft_strsplittest(void)
{
	char **list;
	char str[25];
	int i;

	ft_strcpy(str, "*hello*fellow***students*");

	ft_putendl("\n|******ft_strsplit******|");
	list = ft_strsplit(str, '*');
	i = 0;
	while (i < 3)
	{
		ft_putendl(list[i]);
		i++;
	}
}

static void		ft_strncmptest(void)
{
	char str1[15];
	char str2[15];
	int ret;

	ft_putendl("\n|******ft_strncmp******|");
	ft_strcpy(str1, "abcdef");
	ft_strcpy(str2, "ABCDEF");

	ret = ft_strncmp(str1, str2, 4);

	if (ret < 0)
	{
		ft_putendl("str1 is less than str2");
	}
	else if (ret > 0)
	{
		ft_putendl("str2 is less than str1");
	}
	else
	{
		ft_putendl("str1 is equal to str2");
	}
}

int				main(void)
{
	ft_atoitest();
	ft_memcmptest();
	ft_memcpytest();
	ft_putchartest();
	ft_putchar_fdtest();
	ft_putendltest();
	ft_putendl_fdtest();
	ft_putstrtest();
	ft_putstr_fdtest();
	ft_strclrtest();
	ft_strduptest();
	ft_strncmptest();
	ft_strncpytest();
	ft_strsplittest();
	ft_strsubtest();
	ft_memccpytest();
	ft_strlcattest();
	ft_memmovetest();
	ft_strstrtest();
	ft_strcmptest();
	return (0);
}
