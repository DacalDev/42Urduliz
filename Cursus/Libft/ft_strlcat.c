/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 20:09:08 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 20:09:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < size && dest[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <string.h> // Para comparar con strlcat original

int main()
{
    char dest[20] = "Hello, "; // Espacio suficiente para concatenar
    const char *src = "World!";

    // Usamos ft_strlcat para concatenar la cadena
    size_t result = ft_strlcat(dest, src, sizeof(dest));

    // Imprimimos el resultado
    printf("Destino después de ft_strlcat: %s\n", dest);
    printf("Longitud total de la cadena: %zu\n", result);

    return 0;
}
*/
