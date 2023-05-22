/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:36:47 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:56:25 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	cnt;
	size_t	cntsb;

	cnt = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[cnt] && cnt < len)
	{
		cntsb = 0;
		while (haystack[cnt + cntsb] == needle[cntsb] && cnt + cntsb < len)
		{
			if (needle[++cntsb] == 0)
				return ((char *)&haystack[cnt]);
		}
		cnt++;
	}
	return (0);
}
