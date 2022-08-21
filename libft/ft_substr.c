/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:35:23 by sjadalla          #+#    #+#             */
/*   Updated: 2022/02/14 16:40:36 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		sublen;
	int		l;
	char	*sub;

	l = len;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		l = ft_strlen(s);
	sublen = len - start;
	sub = (char *)malloc((l + 1) * sizeof(*sub));
	if (!sub)
		return (NULL);
	if (start > ft_strlen(s))
	{
		*sub = '\0';
		return (sub);
	}
	ft_strlcpy(sub, (s + start), (l + 1));
	return (sub);
}
	/*
#include <stdio.h>
int main()
{
    char src[] = "substr function Implementation";

    int m = 400;
    int n = 20;

    char* dest = ft_substr(src, m, n);

    printf("%s\n", dest);

    return 0;
}
*/
