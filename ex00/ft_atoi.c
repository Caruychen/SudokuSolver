/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:34:12 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 05:48:20 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int result;
	int sign;

	while (is_whitespace(*str))
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		sign = (*str == '-') ? -1 : 1;
		str++;
	}
	result = 0;
	while (*str != '\0')
	{
		if (is_numeric(*str) == 0)
			break ;
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}

int	is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}
