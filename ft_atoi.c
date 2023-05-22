/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrivas- <anrivas-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:05:44 by anrivas-          #+#    #+#             */
/*   Updated: 2023/05/12 13:21:08 by anrivas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	cont;
	int	num;
	int	sign;

	cont = 0;
	num = 0;
	sign = 1;
	while (str[cont] == 32 || (str[cont] > 8 && str[cont] < 14))
		cont++;
	if (str[cont] == '-')
		sign = sign * -1;
	if (str[cont] == '+' || str[cont] == '-')
		cont++;
	while (str[cont] >= '0' && str[cont] <= '9')
	{
		num = (str[cont] - 48) + (num * 10);
		cont++;
	}
	num = num * sign;
	return (num);
}

// convierte una cadena de caracteres en un número entero