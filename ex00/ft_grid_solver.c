/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_solver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:43:26 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:34:35 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_grid_solver(int **grid)
{
	int row;
	int column;
	int result;
	int	num;

	row = 0;
	column = 0;
	if (is_complete(grid, &row, &column))
		return (SUCCESS);
	num = 1;
	while (num <= 9)
	{
		if (is_possible(grid, row, column, num))
		{
			grid[row][column] = num;
			result = ft_grid_solver(grid);
			if (result)
				return (SUCCESS);
			grid[row][column] = 0;
		}
		++num;
	}
	return (FAIL);
}

int		is_complete(int **grid, int *row, int *column)
{
	while (*row < 9)
	{
		*column = 0;
		while (*column < 9)
		{
			if (grid[*row][*column] == 0)
				return (FALSE);
			(*column)++;
		}
		(*row)++;
	}
	return (TRUE);
}
