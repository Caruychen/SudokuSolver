/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 10:42:55 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:41:13 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int **grid;
	int size;

	if (argc != 10 || is_malformed_args(argv))
	{
		ft_putstr("Error\n");
		return (1);
	}
	size = 9;
	grid = ft_grid_maker(size);
	ft_grid_filler(grid, size, ++argv);
	if (ft_grid_solver(grid) == SUCCESS)
		ft_grid_printer(grid, size);
	else
	{
		ft_putstr("Error\n");
		return (1);
	}
	ft_grid_liberator(grid, size);
	return (0);
}

int		is_malformed_args(char **argv)
{
	int index;
	int size;

	size = 9;
	index = 1;
	while (index <= size)
	{
		if (ft_strlen(argv[index]) != size)
			return (TRUE);
		if (is_malformed_line(argv[index]))
			return (TRUE);
		++index;
	}
	return (FALSE);
}

int		is_malformed_line(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '1' || *str > '9') && (*str != '.'))
			return (TRUE);
		++str;
	}
	return (FALSE);
}
