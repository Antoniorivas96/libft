/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:24:03 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:47:29 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < n)
	{
		if (((unsigned char *)s1)[cnt] != ((unsigned char *)s2)[cnt])
			return (((unsigned char *)s1)[cnt] - ((unsigned char *)s2)[cnt]);
		cnt++;
	}
	return (0);
}
