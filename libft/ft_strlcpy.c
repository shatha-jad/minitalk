/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:41:27 by sjadalla          #+#    #+#             */
/*   Updated: 2022/01/28 16:28:10 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*(src + i))
		i++;
	if (dstsize != 0)
	{
		while (*(src + j) && j < (dstsize - 1))
		{
			*(dest + j) = *(src + j);
			j++;
		}
		*(dest + j) = '\0';
	}
	return (i);
}
