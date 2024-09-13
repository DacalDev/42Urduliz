/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:33:52 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/13 18:55:11 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb) {
    // Caso de error: si el número es negativo, devolvemos 0.
    if (nb < 0)
        return 0;
    
    // Caso base: si nb es 0 o 1, devolvemos 1.
    if (nb == 0 || nb == 1)
        return 1;
    
    // Llamada recursiva: nb * factorial de (nb - 1).
    return nb * ft_recursive_factorial(nb - 1);
}

int ft_recursive_factorial(int nb);

int main() 
{
    // Pruebas con varios valores
    printf("Factorial de 4: %d\n", ft_recursive_factorial(4));  // Debería imprimir 24
    printf("Factorial de 0: %d\n", ft_recursive_factorial(0));  // Debería imprimir 1
    printf("Factorial de 1: %d\n", ft_recursive_factorial(1));  // Debería imprimir 1
    printf("Factorial de 5: %d\n", ft_recursive_factorial(5));  // Debería imprimir 120
    printf("Factorial de -3: %d\n", ft_recursive_factorial(-3)); // Debería imprimir 0

    return 0;
}