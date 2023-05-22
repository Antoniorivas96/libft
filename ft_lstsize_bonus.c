/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:36:54 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:47:15 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int		cont;
	t_list	*lstptr;

	if (!lst)
		return (0);
	cont = 1;
	lstptr = lst;
	while (lstptr->next)
	{
		cont++;
		lstptr = lstptr->next;
	}
	return (cont);
}
