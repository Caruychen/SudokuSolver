/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_filler.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:43:19 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 11:44:08 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_grid_filler(int **grid, int size, char **inputs)
{
	int index;

	index = 0;
	while (index < size)
	{
		ft_populate_row(grid[index], inputs[index]);
		++index;
	}
}

void	ft_populate_row(int *row, char *str)
{
	int		index;
	char	c;

	index = 0;
	while (*str != '\0')
	{
		c = *str++;
		row[index++] = ft_atoi(&c);
	}
}
