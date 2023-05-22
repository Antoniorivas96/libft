/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 13:41:39 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/05 14:39:46 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!src && !dst)
		return (0);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	}
	return (dst);
}
/*
int	main(void)
{
	char *src = "never say never";
	char *dst = "eeeeee";
	
	printf ("%p\n", ft_memmove(dst, src, 4));
	return (0);
}
*/