/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:31:29 by andemart          #+#    #+#             */
/*   Updated: 2024/06/16 22:26:57 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "puzzle.h"

int	main(int argc, char **argv)
{
	int	input[16];

	if (!validate_input(argc, argv, input))
	{
		ft_putstr("Error\n");
		return (1);
	}
	initialize_board();
	if (solve(0, 0, input))
	{
		print_board();
	}
	else
		ft_putstr("Error\n");
	free_board();
	return (0);
}

void	print_board(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			ft_putnbr(g_board[i][j]);
			if (j < SIZE - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
