/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:38:48 by sjadalla          #+#    #+#             */
/*   Updated: 2022/02/07 16:32:51 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_len(long nbr)
{
	long	i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_div(long len)
{
	long	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		len2;
	char	*result;
	long	nbr;

	nbr = n;
	i = 0;
	len = nbr_len(nbr);
	len2 = len;
	result = ft_calloc(len + 1, sizeof (char));
	if (result == NULL)
		return (NULL);
	if (nbr < 0)
	{
		nbr *= -1;
		result[i++] = '-';
		len--;
	}
	while (i < len2)
	{
		result[i++] = ((nbr / ft_div(len)) % 10) + 48;
		len--;
	}
	return (result);
}
