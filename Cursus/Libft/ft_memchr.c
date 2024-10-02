/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:01:23 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 10:01:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
		{
			return ((void *)ptr);
		}
		ptr++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	const char	*str;
	char		*resultado;
	char		caracter;
	size_t		n;

	str = "Hola, mundo";
	caracter = 'H';
	n = strlen(str); // Tamaño de la cadena
	resultado = ft_memchr(str, caracter, n);
	if (resultado != 0)
	{
		printf("El carácter '%c' se encontró en la posición: %ld\n", caracter, resultado - str);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
	}
	return (0);
}
