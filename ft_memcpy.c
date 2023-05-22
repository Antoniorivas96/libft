/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:03:17 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/22 11:31:45 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cont;

	if (!src && !dst)
		return (0);
		cont = 0;
	while (cont < n)
	{
		*((unsigned char *)(dst + cont)) = *((unsigned char *)(src + cont));
		cont++;
	}
	return (dst);
}
/*
int	main(void)
{
	char *src = "never say never";
	char *dst = "eeeeee";
	
	printf ("%s\n", ft_memcpy(dst, src, 4));
	return (0);
} */