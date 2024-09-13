/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:04:19 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/13 19:34:37 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int i = 1;

    // Caso de error: si el número es negativo, devolvemos 0
    if (nb < 0)
    {
        return 0;
    }

    // Raíces cuadradas para 0 y 1
    if (nb == 0 || nb == 1)
    {
        return nb;
    }

    // Iteramos para encontrar la raíz cuadrada exacta
    while (i <= nb / 2)
    {
        if (i * i == nb)
        {
            return i;  // Si encontramos la raíz exacta, la devolvemos
        }
        i++;
    }

    // Si no encontramos una raíz cuadrada exacta, devolvemos 0
    return 0;
}

int ft_sqrt(int nb);

int main()
{
    printf("Raíz cuadrada de 25: %d\n", ft_sqrt(25));  // Debe imprimir 5
    printf("Raíz cuadrada de 16: %d\n", ft_sqrt(16));  // Debe imprimir 4
    printf("Raíz cuadrada de 26: %d\n", ft_sqrt(26));  // Debe imprimir 0
    printf("Raíz cuadrada de 0: %d\n", ft_sqrt(0));    // Debe imprimir 0
    printf("Raíz cuadrada de -4: %d\n", ft_sqrt(-4));  // Debe imprimir 0
    return 0;
}