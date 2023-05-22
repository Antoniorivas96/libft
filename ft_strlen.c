/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:46:13 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/05 14:36:45 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont])
		cont++;
	return (cont);
}
/*
int	main(void)
{
	const char *s = "weeeee";
	size_t c;
	c = ft_strlen(s);
	printf("%zu\n", c);
	return (0);
}
 */