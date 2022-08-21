/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:48:57 by sjadalla          #+#    #+#             */
/*   Updated: 2022/01/27 17:56:46 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
//#include <stdio.h>
//#include <string.h>
//#define LEN 10
*/
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(char *)(b + i) = (unsigned char) c;
		i++;
	}
	return (b);
}
/*
int main(void) {
	char arr[LEN];
	int loop;

	printf("Array elements are (before myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling all blocks with 0
	ft_memset(arr,0,LEN);
	printf("Array elements are (after myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	//filling first 3 blocks with -1
	//and second 3 blocks with -2
	//and then 3 blocks with -3
	ft_memset(arr,-1,3);
	ft_memset(arr+3,-2,3);
	ft_memset(arr+6,-3,3);
	printf("Array elements are (after myMemSet()): \n");
	for(loop=0; loop<LEN; loop++)
		printf("%d ",arr[loop]);
	printf("\n");

	return 0;
}
*/
