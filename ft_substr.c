/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:11:18 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:43:11 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	tam;

	tam = ft_strlen(s);
	if (tam <= start)
		return (ft_strdup(""));
	if (tam - start < len)
		len = tam - start;
	substr = (char *)malloc (len + 1);
	if (!substr)
		return (0);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

// devuelve un substring del string s  que va desde start hasta len
