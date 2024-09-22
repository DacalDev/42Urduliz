/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:15:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/22 09:38:49 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int ft_iterative_factorial(int nb);

int main() 
{
    printf("Factorial de 4: %d\n", ft_iterative_factorial(4));
    printf("Factorial de 0: %d\n", ft_iterative_factorial(0));
    printf("Factorial de -3: %d\n", ft_iterative_factorial(-3));
    return 0;
}
*/