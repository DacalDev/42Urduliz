/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is-valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andemart <andemart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:33:11 by andemart          #+#    #+#             */
/*   Updated: 2024/06/16 21:56:34 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "puzzle.h"

#define SIZE 4
//int **g_board;

int	is_valid(int row, int col, int height)
{
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (g_board[row][i] == height)
			return (0);
		i++;
	}
	i = 0;
	while (i < SIZE)
	{
		if (g_board[i][col] == height)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}
