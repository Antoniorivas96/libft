/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 12:55:29 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:37:31 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str3;
	size_t	tam;

	if (!s1 || !s2)
		return (0);
	tam = ft_strlen(s1) + ft_strlen(s2);
	str3 = (char *)malloc (tam + 1);
	if (!str3)
		return (0);
	ft_memcpy(str3, s1, ft_strlen(s1));
	ft_memcpy(str3 + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str3);
}

// concatena dos cadenas de caracteres en una nueva cadena de caracteres.