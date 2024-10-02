/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:39:21 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/10/01 11:41:09 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
/*
#include <stdio.h>

int	main()
{
	size_t num_elements = 5;
	int	*array = (int *)calloc(num_elements, sizeof(int)); // Asignar memoria para 5 enteros

	if (array == NULL)
	{
		// Verificar si la asignación de memoria falló
		fprintf(stderr, "Error al asignar memoria.\n");
		return 1;
	}

	// Mostrar los valores inicializados (deben ser todos ceros)
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]); // Salida: array[i] = 0
	}

	// Asignar valores
	for (size_t i = 0; i < num_elements; i++)
	{
		array[i] = i + 1; // Llenar el array con valores 1, 2, 3, 4, 5
	}

	// Mostrar los valores asignados
	for (size_t i = 0; i < num_elements; i++)
	{
		printf("array[%zu] = %d\n", i, array[i]); // Salida: array[i] = 1, 2, 3, 4, 5
	}

	// Liberar la memoria asignada
	free(array);

	return 0;
}
*/
