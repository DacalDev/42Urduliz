/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:08:19 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 19:08:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h> // Para comparar con la función memcpy original

int main(void)
{
    char source[] = "Hello, World!";
    char destination[20];

    // Usamos ft_memcpy para copiar el contenido de source a destination
    ft_memcpy(destination, source, strlen(source) + 1);  // +1 para incluir el '\0'

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}
*/
