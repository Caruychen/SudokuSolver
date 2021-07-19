/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_grid_liberator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchen <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 13:35:53 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:41:15 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_grid_liberator(int **grid, int size)
{
	int index;

	index = 0;
	while (index < size)
		free(grid[index++]);
	free(grid);
}
