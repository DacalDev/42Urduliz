/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:33:15 by andemart          #+#    #+#             */
/*   Updated: 2024/06/16 19:20:23 by andemart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>  // Añadir esta librería para usar write
#include "puzzle.h"

#define SIZE 4

int	**g_board;

int	check_col_up(int col, int *input)
{
	int	i;
	int	max_height;
	int	visible_boxes;

	i = 0;
	max_height = 0;
	visible_boxes = 0;
	while (i < SIZE)
	{
		if (g_board[i][col] > max_height)
		{
			max_height = g_board[i][col];
			visible_boxes++;
		}
		i++;
	}
	return (visible_boxes == input[col]);
}

int	check_col_down(int col, int *input)
{
	int	i;
	int	max_height;
	int	visible_boxes;

	i = SIZE - 1;
	max_height = 0;
	visible_boxes = 0;
	while (i >= 0)
	{
		if (g_board[i][col] > max_height)
		{
			max_height = g_board[i][col];
			visible_boxes++;
		}
		i--;
	}
	return (visible_boxes == input[SIZE + col]);
}

int	check_row_left(int row, int *input)
{
	int	i;
	int	max_height;
	int	visible_boxes;

	i = 0;
	max_height = 0;
	visible_boxes = 0;
	while (i < SIZE)
	{
		if (g_board[row][i] > max_height)
		{
			max_height = g_board[row][i];
			visible_boxes++;
		}
		i++;
	}
	return (visible_boxes == input[2 * SIZE + row]);
}

int	check_row_right(int row, int *input)
{
	int	i;
	int	max_height;
	int	visible_boxes;

	i = SIZE - 1;
	max_height = 0;
	visible_boxes = 0;
	while (i >= 0)
	{
		if (g_board[row][i] > max_height)
		{
			max_height = g_board[row][i];
			visible_boxes++;
		}
		i--;
	}
	return (visible_boxes == input[3 * SIZE + row]);
}
