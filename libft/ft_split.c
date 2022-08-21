/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalaghba <aalaghba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:13:18 by aalaghba          #+#    #+#             */
/*   Updated: 2022/02/10 11:49:52 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

int	count_chars(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		strs;
	int		strc;
	int		string_length;
	char	**pointer;

	if (!s)
		return (NULL);
	string_length = count_words(s, c);
	pointer = (char **)malloc(sizeof(char *) * (string_length + 1));
	if (!pointer)
		return (NULL);
	strs = 0;
	while (strs < string_length)
	{
		strc = 0;
		while (*s == c)
			s++;
		pointer[strs] = (char *)malloc(sizeof(char) * (count_chars(s, c) + 1));
		while (*s && *s != c)
			pointer[strs][strc++] = *s++;
		pointer[strs][strc] = '\0';
		strs++;
	}
	pointer[strs] = 0;
	return (pointer);
}
/*
int main()
{
	char	s1[] = "       Hello World! jh     oh   ohoo  ooh   ";
	char	**s2 = ft_split(s1, ' ');
	int	i = 0;

	while (s2[i])
		printf("%s\n", s2[i++]);
}*/
