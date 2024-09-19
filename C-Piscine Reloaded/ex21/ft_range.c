/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:06:24 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/19 17:13:30 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>  // Para usar malloc

int *ft_range(int min, int max)
{
    // Verificar si min es mayor o igual que max
    if (min >= max)
        return NULL;

    // Calcular el tamaño del array
    int size = max - min;

    // Reservar memoria para el array
    int *array = (int *)malloc(size * sizeof(int));

    // Verificar si la memoria fue reservada correctamente
    if (!array)
        return NULL;

    // Rellenar el array con valores desde min hasta max-1 usando while
    int i = 0;
    while (i < size)
    {
        array[i] = min + i;
        i++;
    }

    // Devolver el puntero al array
    return array;
}

#include <stdio.h>   // Para usar printf
#include <stdlib.h>  // Para usar free

int *ft_range(int min, int max);  // Declaración de la función ft_range

int main(void)
{
    int min = 3;
    int max = 7;

    // Llamamos a ft_range con min y max
    int *range = ft_range(min, max);

    // Verificar si el array es NULL (por ejemplo, si min >= max)
    if (range == NULL)
    {
        printf("El rango es nulo (min >= max o error al asignar memoria)\n");
    }
    else
    {
        // Imprimir los valores del array
        printf("Array generado entre %d y %d (max excluido):\n", min, max);
        for (int i = 0; i < (max - min); i++)
        {
            printf("%d ", range[i]);
        }
        printf("\n");

        // Liberar la memoria asignada
        free(range);
    }

    return 0;
}