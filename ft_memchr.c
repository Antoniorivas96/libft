/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:33:47 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/08 15:21:56 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:29:02 by anrivas-          #+#    #+#             */
/*   Updated: 2023/04/27 13:29:09 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			cont;
	unsigned char	*ptrstr;

	cont = 0;
	ptrstr = (unsigned char *)str;
	while (cont < n)
	{
		if (ptrstr[cont] == (unsigned char)c)
			return (&ptrstr[cont]);
		cont++;
	}
	return (0);
}

// busca la primera aparición de un carácter dado en una cadena de memoria