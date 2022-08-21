/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:15:01 by sjadalla          #+#    #+#             */
/*   Updated: 2022/02/14 19:00:48 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = 0;
	i = 0;
	d = ft_strlen(dest);
	s = ft_strlen(src);
	if (dstsize <= d)
		s = dstsize + s;
	else
	{
		s = s + d;
		while (*(src + i) && d < (dstsize - 1))
		{
			*(dest + d) = *(src + i);
			i++;
			d++;
		}
		*(dest + d) = '\0';
	}
	return (s);
}
