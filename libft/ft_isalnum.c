/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:11:11 by sjadalla          #+#    #+#             */
/*   Updated: 2022/08/20 21:33:47 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int alnum)
{
	if ((alnum >= 48 && alnum <= 57)
		|| (alnum >= 65 && alnum <= 90) || (alnum >= 97 && alnum <= 122))
		return (alnum);
	else
		return (0);
}
/*
int main()
{
char c;
c = 'A';
printf("%n", ft_isalnum(c));
}*/
