/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daolivei <daolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:33:44 by daolivei          #+#    #+#             */
/*   Updated: 2022/04/01 02:33:47 by daolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
/*
is space:
' '		= 32
'\r'	= 13
'\f'	= 12
'\v'	= 11
'\n'	= 10
'\t'	= 9
*/

int	check_error(char *str)
{
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 43 || *str == 45)
		str++;
	if (*str >= 48 && *str <= 57)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	number;
	int	base;
	int	sign;
	int	i;

	number = 0;
	sign = 1;
	i = 0;
	base = 10;
	if (check_error(str))
		return (0);
	while (str[i] < 48)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = (number * base) + ((str[i] - 48) * sign);
		i++;
	}
	return (number);
}
