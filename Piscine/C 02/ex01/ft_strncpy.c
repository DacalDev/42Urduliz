/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:57:59 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/20 15:27:26 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>   

int main()
{
    char dest[20];

    // Caso 1: n menor que la longitud de src
    char src1[] = "Hola Mundo";
    ft_strncpy(dest, src1, 5);
    printf("Caso 1: %s\n", dest); // Esperado: "Hola "

    // Caso 2: n igual a la longitud de src
    char src2[] = "Prueba";
    ft_strncpy(dest, src2, 6);
    printf("Caso 2: %s\n", dest); // Esperado: "Prueba"

    // Caso 3: n mayor que la longitud de src
    char src3[] = "Ejemplo";
    ft_strncpy(dest, src3, 10);
    printf("Caso 3: %s\n", dest); // Esperado: "Ejemplo\0\0\0"

    // Caso 4: src es una cadena vacía
    char src4[] = "";
    ft_strncpy(dest, src4, 5);
    printf("Caso 4: %s\n", dest); // Esperado: "\0\0\0\0\0"

    // Caso 5: n es cero
    char src5[] = "Texto";
    ft_strncpy(dest, src5, 0);
    printf("Caso 5: %s\n", dest); // Esperado: "" (cadena vacía)

    return 0;
}
*/
