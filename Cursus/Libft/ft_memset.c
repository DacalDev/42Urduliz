/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:38:36 by marvin            #+#    #+#             */
/*   Updated: 2024/09/25 18:38:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *)ptr;
	val = (unsigned char)value;
	i = 0;
	while (i < num)
	{
		p[i] = val;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[20];
    char ft_buffer[20];

    // Llenamos ambos buffers con un carácter inicial, por ejemplo 'A'.
    memset(buffer, 'A', sizeof(buffer));
    memset(ft_buffer, 'A', sizeof(ft_buffer));

    // Imprimimos el contenido original de los buffers
    printf("Buffer inicial (antes de memset):\n");
    printf("buffer: %s\n", buffer);
    printf("ft_buffer: %s\n\n", ft_buffer);

    // Usamos la función memset original para llenar con 'B' y tu función ft_memset.
    memset(buffer, 'B', 10);
    ft_memset(ft_buffer, 'B', 10);

    // Imprimimos el contenido final después de usar las funciones.
    printf("Buffer final (después de memset):\n");
    printf("buffer: %s\n", buffer);
    printf("ft_buffer: %s\n", ft_buffer);

    // Comparamos los resultados.
    if (memcmp(buffer, ft_buffer, 20) == 0)
    {
        printf("\n¡Las funciones memset y ft_memset son equivalentes!\n");
    }
    else
    {
        printf("\nLas funciones memset y ft_memset no producen los mismos resultados.\n");
    }

    return 0;
}
*/
