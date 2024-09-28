/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:56:41 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 19:56:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h> // Para comparar con la función strlcpy original

int main() {
    char dest[20]; // Espacio suficiente para la copia
    const char *src = "Hello, World!";

    // Usamos ft_strlcpy para copiar la cadena
    size_t result = ft_strlcpy(dest, src, sizeof(dest));

    // Imprimimos el resultado
    printf("Fuente: %s\n", src);
    printf("Destino: %s\n", dest);
    printf("Longitud total de la fuente: %zu\n", result);

    // Probar el comportamiento con size = 0
    size_t result_zero = ft_strlcpy(dest, src, 0);
    printf("Longitud total de la fuente (con size=0): %zu\n", result_zero);
    printf("Destino (con size=0): %s\n", dest); // Debería seguir siendo "Hello, World!"

    return 0;
}
*/
