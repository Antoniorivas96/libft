/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:28:48 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:41:48 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = ft_strlen((char *)s);
	while (cont >= 0)
	{
		if (s[cont] == (char) c)
			return ((char *)&s[cont]);
		cont--;
	}
	return (0);
}
