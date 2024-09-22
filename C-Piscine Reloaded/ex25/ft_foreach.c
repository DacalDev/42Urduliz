/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 08:50:57 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/22 08:51:27 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_foreach(int *tab, int length, void (*f)(int)) 
{
    int i = 0;  // Inicializa el índice
    while (i < length) 
    {
        f(tab[i]);  // Aplica la función f al elemento actual del array
        i++;  // Incrementa el índice
    }
}

// Ejemplo de función que se puede pasar a ft_foreach
void ft_putnbr(int n) {
    printf("%d\n", n);  // Imprime el número
}

// Función main para probar ft_foreach
int main() 
{
    int tab[] = {1, 2, 3, 4, 5};
    int length = sizeof(tab) / sizeof(tab[0]);  // Calcula la longitud del array

    ft_foreach(tab, length, &ft_putnbr);  // Llama a ft_foreach para imprimir los números
    return 0;
}