/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:32:30 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 15:56:26 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*ptr;

	if (!lst)
		return (NULL);
	nlist = 0;
	while (lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (ptr)
		{
			ft_lstadd_back(&nlist, ptr);
			lst = lst->next;
		}
		else
		{
			ft_lstclear(&ptr, del);
			return (0);
		}
	}
	return (nlist);
}
