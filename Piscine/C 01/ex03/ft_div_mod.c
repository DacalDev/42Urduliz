/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 18:08:53 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/18 19:46:09 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x = 42;
	int	y = 3;
	int	div2;
	int	mod2;

	printf("Valor inicial de x: %d, y: %d\n", x, y);
	ft_div_mod(x, y, &div2, &mod2);
	printf("Valor final de div: %d y mod: %d \n", div2, mod2);

	return (0);
}
*/