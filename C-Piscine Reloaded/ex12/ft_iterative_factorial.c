/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:15:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/13 18:21:27 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int result = 1;
    
    // Devolver 0 si el número es negativo.
    if (nb < 0) {
        return 0;
    }

    // Calcular el factorial de manera iterativa.
    while (nb > 0) {
        result *= nb;
        nb--;
    }

    return result;
}

int ft_iterative_factorial(int nb);

int main() 
{
    printf("Factorial de 4: %d\n", ft_iterative_factorial(4)); // Debería imprimir 24
    printf("Factorial de 0: %d\n", ft_iterative_factorial(0)); // Debería imprimir 1
    printf("Factorial de -3: %d\n", ft_iterative_factorial(-3)); // Debería imprimir 0
    return 0;
}