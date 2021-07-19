/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_maker.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <cchen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:43:08 by cchen             #+#    #+#             */
/*   Updated: 2021/06/07 10:12:33 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		**ft_grid_maker(int size)
{
	int **grid;

	grid = (int**)malloc(sizeof(*grid) * size);
	ft_add_rows(grid, size);
	return (grid);
}

void	ft_add_rows(int **grid, int size)
{
	int index;

	index = 0;
	while (index < size)
	{
		grid[index++] = (int*)malloc(sizeof(**grid) * size);
	}
}
