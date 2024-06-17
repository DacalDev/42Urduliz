/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rares-pe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:52:09 by rares-pe          #+#    #+#             */
/*   Updated: 2024/06/16 22:29:36 by rares-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

#define SIZE 4

extern int	**g_board;

// Declaraciones de funciones
void	print_board(void);
int		solve(int row, int col, int *input);
int		solve2(int row, int col, int *input);
int		validate_input(int argc, char **argv, int *input);
void	initialize_board(void);
void	free_board(void);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

int		check_col_up(int col, int *input);
int		check_col_down(int col, int *input);
int		check_row_left(int row, int *input);
int		check_row_right(int row, int *input);
int		is_valid(int row, int col, int height);
