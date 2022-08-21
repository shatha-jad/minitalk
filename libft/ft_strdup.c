/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:22:39 by sjadalla          #+#    #+#             */
/*   Updated: 2022/01/28 16:23:24 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include<stdlib.h>
//#include<stdio.h>
char	*ft_strdup(const char *src)
{
	char	*duplicate;
	size_t	i;

	i = ft_strlen(src);
	duplicate = (char *)malloc(sizeof(*duplicate) * (i + 1));
	i = 0;
	if (duplicate == NULL)
		return (NULL);
	while (src[i])
	{
		duplicate[i] = src[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
/*
int main() {
   char *s="Hello";
   char *e=ft_strdup("LOL");
   printf ("%s", e);
   return 0;
}*/
