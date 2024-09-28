/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:00:22 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 19:00:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h> // Para comparar con la función bzero original

int main(void)
{
    char buffer[10];

    // Inicializamos el buffer con el carácter 'A'
    memset(buffer, 'A', sizeof(buffer));

    // Imprimimos el contenido original del buffer
    printf("Buffer antes de ft_bzero: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", buffer[i]);
    }
    printf("\n");

    // Usamos la función ft_bzero para llenar los primeros 5 bytes con 0
    ft_bzero(buffer, 5);

    // Imprimimos el contenido del buffer después de usar ft_bzero
    printf("Buffer después de ft_bzero: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", buffer[i]); // Mostramos los valores numéricos
    }
    printf("\n");

    return 0;
}
*/
