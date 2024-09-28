/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:36:59 by marvin            #+#    #+#             */
/*   Updated: 2024/09/27 19:36:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h> // Para comparar con la función memmove original

int main(void)
{
    char str[] = "Hello, World!";
	printf("Resultado antes de ft_memmove: %s\n", str);
    // Usamos ft_memmove para copiar una parte de la cadena en la misma cadena (superposición)
    ft_memmove(str + 7, str, 5); // Copiar los primeros 5 caracteres a la posición 6

	printf("Resultado después de ft_memmove: %s\n", str);

    return 0;
}
*/
