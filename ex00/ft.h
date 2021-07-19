/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lonnguye <lonnguye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:13:16 by cchen             #+#    #+#             */
/*   Updated: 2021/06/06 13:42:12 by cchen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

# define LOW_LIMIT -2147483648
# define SUCCESS 1
# define FAIL 0
# define TRUE 1
# define FALSE 0

int		ft_atoi(char *str);
int		is_numeric(char c);
int		is_whitespace(char c);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *c);
int		ft_strlen(char *str);
int		**ft_grid_maker(int size);
void	ft_add_rows(int **grid, int size);
void	ft_grid_filler(int **grid, int argc, char **inputs);
void	ft_populate_row(int *row, char *str);
int		ft_grid_solver(int **grid);
int		is_complete(int **grid, int *row, int *col);
void	ft_grid_printer(int **grid, int size);
void	ft_print_row(int *row, int size);
int		is_possible(int **grid, int row, int col, int num);
int		is_in_row(int **grid, int row, int num);
int		is_in_column(int **grid, int col, int num);
int		is_in_local_box(int **grid, int row, int col, int num);
int		is_malformed_args(char **argv);
int		is_malformed_line(char *str);
void	ft_grid_liberator(int **grid, int size);

#endif
