/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:11:34 by sjadalla          #+#    #+#             */
/*   Updated: 2022/01/27 17:15:24 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == to_find[j]
			&& str[i + j] != '\0' && ((i + j) < len))
		{
			j++;
			if (to_find[j] == '\0')
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
/*

int     main(void)
{
    char str[] = "Hello World";
    char to_find[] = "Wor" ;

    printf("-----\nstr = %s\nto_find = %s\n", str, to_find);
    printf("%s\n", ft_strnstr(str, to_find,10));


    return (0);
}
*/
