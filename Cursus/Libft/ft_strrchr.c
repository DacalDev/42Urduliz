/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:24:17 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 09:24:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	*last_char;

	last_char = 0;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_char = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (last_char);
}
/*
#include <stdio.h>

int	main()
{
	const char	*cadena;
	char		*resultado;
	char		caracter;

	cadena = "Hola, mundo";
	caracter = 'm';
	resultado = ft_strrchr(cadena, caracter); // Buscar la última aparición de 'caracter'
	if (resultado != 0)
	{
		printf("La última aparición de '%c' está en la posición: %ld\n", caracter, resultado - cadena);
	}
	else
	{
		printf("No se encontró el carácter '%c' en la cadena.\n", caracter);
	}
	return (0);
}
*/
