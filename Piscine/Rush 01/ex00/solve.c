/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:36:31 by andemart          #+#    #+#             */
/*   Updated: 2024/06/16 23:37:16 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

#define SIZE 4

int	solve_size(int *input)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (!check_col_up(i, input) || !check_col_down(i, input))
			return (0);
		if (!check_row_left(i, input) || !check_row_right(i, input))
			return (0);
		i++;
	}
	return (1);
}

int	solve(int row, int col, int *input)
{
	int	next_row;
	int	next_col;
	int	height;

	next_row = row;
	next_col = col + 1;
	if (row == SIZE)
		return (solve_size(input));
	if (col == SIZE - 1)
		next_row = row + 1;
	if (col == SIZE - 1)
		next_col = 0;
	height = 1;
	while (height <= SIZE)
	{
		if (is_valid(row, col, height))
		{
			g_board[row][col] = height;
			if (solve(next_row, next_col, input))
				return (1);
			g_board[row][col] = 0;
		}
		height++;
	}
	return (0);
}
