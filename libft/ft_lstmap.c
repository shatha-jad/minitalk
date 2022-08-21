/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjadalla <sjadalla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:11:23 by sjadalla          #+#    #+#             */
/*   Updated: 2022/08/20 21:34:32 by sjadalla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*r;

	if (!lst || !f)
		return (0);
	l = ft_lstnew((*f)(lst->content));
	if (!l)
		return (0);
	r = l;
	lst = lst->next;
	while (lst)
	{
		l->next = ft_lstnew((*f)(lst->content));
		if (!l)
			return (0);
		l = l->next;
		lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (r);
}
