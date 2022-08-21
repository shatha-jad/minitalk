/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:23:32 by sjadalla          #+#    #+#             */
/*   Updated: 2022/02/02 17:55:55 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;

	if (fd < 0)
		return ;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n < 10)
		{
			digit = n % 10 + '0';
			write(fd, &digit, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}
/*
#include <stdio.h>

int		main(void)
{
    printf(" (printed) should be 1");
    ft_putnbr_fd(1,1);
    printf("\n (printed) should be 0");
    ft_putnbr_fd(0,1);
    printf("\n (printed) should be -5");
    ft_putnbr_fd(-5,2);
    printf("\n (printed) should be 2147483647");
    ft_putnbr_fd(2147483647,1);
    printf("\n (printed) should be -2147483648");
    ft_putnbr_fd(-2147483648,2);
    printf("\n");
    return (0);
}
*/
