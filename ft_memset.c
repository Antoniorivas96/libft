/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:35:04 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/05 14:36:46 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	while (len--)
		*(unsigned char *)(b + len) = (unsigned char)c;
	return (b);
}
/*
int main(void)
{
	char test[]= "hola";
	printf("%s\n", ft_memset(test, 49, 3));
	return 0;
}
*/