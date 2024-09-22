/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:33:52 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/22 10:01:42 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else
		if (nb == 0 || nb == 1)
			return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int ft_recursive_factorial(int nb);

int main() 
{
    // Pruebas con varios valores
    printf("Factorial de 4: %d\n", ft_recursive_factorial(4));
    printf("Factorial de 0: %d\n", ft_recursive_factorial(0));
    printf("Factorial de 5: %d\n", ft_recursive_factorial(5));
    printf("Factorial de -3: %d\n", ft_recursive_factorial(-3));

    return 0;
}
*/