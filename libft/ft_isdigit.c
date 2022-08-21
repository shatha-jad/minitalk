/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:06:10 by sjadalla          #+#    #+#             */
/*   Updated: 2022/01/27 17:11:49 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int digit)
{
	if (digit >= 48 && digit <= 57)
		return (digit);
	else
		return (0);
}
/*
int main()
{
int c;
c = 5;
printf("%n", ft_isdigit(c));
}*/
