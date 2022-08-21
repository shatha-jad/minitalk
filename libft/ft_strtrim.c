/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:46:25 by sjadalla          #+#    #+#             */
/*   Updated: 2022/02/14 19:01:56 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char 	*str;
	
	i = 0;
	if (!s1 || !set)
        return (0);
	  j = ft_strlen(s1);
    while (s1[i] && ft_strchr(set, s1[i]))
		i++;
   	while (*s1 && ft_strrchr(set, s1[j]))
        j--;
	size_t n; 
		n= j-i;
	if (n < 0)
		n = -n;
	str = ft_substr(s1, i, n + 1);
	return (str);
}
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (*s1 && ft_strrchr(set, s1[i]))
		i--;
	str = ft_substr(s1, 0, i + 1);
	return (str);
}
/*
#include <stdio.h>
#include<string.h>
int main()
{
	char *s1 = "          ";
	char *strtrim;
		if (!(strtrim = ft_strtrim(s1, " ")))
			printf("NULL");
		else
			printf("Not NULL");
		strtrim = NULL;
	printf("-%s-\n-%s-\n", s1, strtrim);
}*/
