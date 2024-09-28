/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:06:01 by marvin            #+#    #+#             */
/*   Updated: 2024/09/28 17:06:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *c, int i)
{
	while (*c)
	{
		if (*c == (char)i)
		{
			return ((char *)c);
		}
		c++;
	}
	if (i == '\0')
	{
		return ((char *)c);
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	const	char *cadena = "Hola mundo";
	char	caracter = 'm';

	// Busca el carácter 'm' en la cadena
	char	*resultado = ft_strchr(cadena, caracter);

	if (resultado != NULL)
	{
		printf("El carácter '%c' se encontró en la posición: %ld\n", caracter, resultado - cadena);
	}
	else
	{
		printf("El carácter '%c' no se encontró en la cadena.\n", caracter);
	}

	// Prueba con el carácter nulo
	resultado = ft_strchr(cadena, '\0');
	printf("El carácter nulo se encuentra en la posición: %ld\n", resultado - cadena);

	return (0);
}
*/
