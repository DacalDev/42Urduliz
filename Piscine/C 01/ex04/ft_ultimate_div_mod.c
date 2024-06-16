/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:03:46 by danperez          #+#    #+#             */
/*   Updated: 2024/06/15 19:25:00 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

#include <stdio.h>

int	main(void)
{
	int	x = 42, y = 4;

	ft_ultimate_div_mod(&x, &y);
	printf("División: %d\n", x);
	printf("Resto: %d\n", y);
}

