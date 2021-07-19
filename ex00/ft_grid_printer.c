/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_printer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:43:35 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:26:35 by lonnguye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_grid_printer(int **grid, int size)
{
	int index;

	index = 0;
	while (index < size)
	{
		ft_print_row(grid[index++], size);
		ft_putchar('\n');
	}
}

void	ft_print_row(int *row, int size)
{
	int index;

	index = 0;
	while (index < size)
	{
		ft_putnbr(row[index]);
		if (index < size - 1)
			ft_putchar(' ');
		index++;
	}
}
