/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:44:50 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/18 21:49:53 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <unistd.h>

int main()
{
	char src[] = "Hola, mundo!";
	char dest[20];
	int len = 0;

	ft_strcpy(dest, src);

	// Calcula la longitud de la cadena copiada para usar en write
	while (dest[len] != '\0')
	{
		len++;
	}

	// Escribe la cadena copiada usando write
	write(1, "Cadena copiada: ", 16);
	write(1, dest, len);
	write(1, "\n", 1);

	return (0);
}
*/