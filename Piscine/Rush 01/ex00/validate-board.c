/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate-board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:59:02 by andemart          #+#    #+#             */
/*   Updated: 2024/06/16 22:05:23 by magalean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

//void ft_putnbr(int nbr);

#define SIZE 4

int	validate_input(int argc, char **argv, int *input)
{
	char	*token;
	int		i;

	if (argc != 2)
		return (0);
	token = strtok(argv[1], " ");
	i = 0;
	while (i < 16)
	{
		if (token == NULL)
			return (0);
		input[i] = atoi(token);
		if (input[i] < 1 || input[i] > 4)
			return (0);
		token = strtok(NULL, " ");
		i++;
	}
	return (token == NULL);
}

void	initialize_board(void)
{
	int	i;
	int	j;

	g_board = (int **)malloc(SIZE * sizeof(int *));
	i = 0;
	while (i < SIZE)
	{
		g_board[i] = (int *)malloc(SIZE * sizeof(int));
		j = 0;
		while (j < SIZE)
		{
			g_board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	free_board(void)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		free(g_board[i]);
		i++;
	}
	free(g_board);
}
