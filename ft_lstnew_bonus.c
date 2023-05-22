/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:39:27 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:26:48 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*n_list;

	n_list = (t_list *)malloc(sizeof(t_list));
	if (!n_list)
		return (NULL);
	n_list->content = content;
	n_list->next = NULL;
	return (n_list);
}
