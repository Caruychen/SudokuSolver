/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:44:05 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:19:21 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		is_possible(int **grid, int row, int column, int num)
{
	if (is_in_row(grid, row, num))
		return (FALSE);
	if (is_in_column(grid, column, num))
		return (FALSE);
	if (is_in_local_box(grid, row, column, num))
		return (FALSE);
	return (TRUE);
}

int		is_in_row(int **grid, int row, int num)
{
	int column;

	column = 0;
	while (column < 9)
	{
		if (grid[row][column] == num)
			return (TRUE);
		column++;
	}
	return (FALSE);
}

int		is_in_column(int **grid, int column, int num)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (grid[row][column] == num)
			return (TRUE);
		row++;
	}
	return (FALSE);
}

int		is_in_local_box(int **grid, int row, int column, int num)
{
	int y;
	int x;
	int y_base;
	int x_base;

	y_base = (row / 3) * 3;
	x_base = (column / 3) * 3;
	y = 0;
	while (y < 3)
	{
		x = 0;
		while (x < 3)
		{
			if (grid[y_base + y][x_base + x] == num)
				return (TRUE);
			++x;
		}
		++y;
	}
	return (FALSE);
}
