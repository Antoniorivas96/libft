/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:00:27 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:45:22 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstptr;

	while (*lst)
	{
		del((*lst)->content);
		lstptr = *lst;
		*lst = lstptr->next;
		free(lstptr);
	}
	*lst = NULL;
}
