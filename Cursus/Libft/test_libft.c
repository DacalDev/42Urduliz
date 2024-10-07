/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:12:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/07 12:12:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	printf("\n");
	printf("\033[1;31mPrueba de ft_atoi\033[0m\n");
	printf("%d\n", ft_atoi("   -12345"));  // Salida: -12345
	printf("%d\n", ft_atoi("42"));         // Salida: 42
	printf("%d\n", ft_atoi("  +5678"));    // Salida: 5678
	printf("%d\n", ft_atoi("   987abc"));  // Salida: 987 (se detiene cuando encuentra 'a')
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;32mPrueba de ft_bzero\033[0m\n");
	char buffer[10];
	// Inicializamos el buffer con el carácter 'A'
	memset(buffer, 'A', sizeof(buffer));
	// Imprimimos el contenido original del buffer
	printf("Buffer antes de ft_bzero:\n");
	for (int i = 0; i < 10; i++)
		printf("%c ", buffer[i]);
	printf("\n");
	// Usamos la función ft_bzero para llenar los primeros 5 bytes con 0
	ft_bzero(buffer, 5);
	// Imprimimos el contenido del buffer después de usar ft_bzero
	printf("\nBuffer después de ft_bzero:\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", buffer[i]); // Mostramos los valores numéricos
	printf("\n\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;33mPrueba de ft_calloc\033[0m\n");
	size_t	num_elements = 5;
	int		*array = (int *)calloc(num_elements, sizeof(int)); // Asignar memoria para 5 enteros
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
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	printf("\033[1;34mPrueba de ft_isalnum\033[0m\n");
	char	c;
	char	msg_alnum[] = " es un carácter alfanumérico.\n";
	char	msg_no_alnum[] = " no es un carácter alfanumérico.\n";
	c = '&';
	write(1, &c, 1);
	if (ft_isalnum(c))
		write(1, msg_alnum, sizeof(msg_alnum) - 1);
	else
		write(1, msg_no_alnum, sizeof(msg_no_alnum) - 1);
	printf("\nPresiona Enter para continuar...\n");
	getchar(); // Espera a que el usuario presione Enter

	return (0);
}
