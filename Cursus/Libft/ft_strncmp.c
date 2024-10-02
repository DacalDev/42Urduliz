/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:48:00 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 09:48:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 && (*s1 == *s2) && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
#include <stdio.h>
#include <string.h>

// Declaración de la función ft_strncmp
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int main() {
    const char *str1 = "Hola, mundo";
    const char *str2 = "Hola, amigos";
    const char *str3 = "Hola, mundo";
    const char *str4 = "H";
    size_t n;

    // Comparación de las primeras 5 letras
    n = 5;
    printf("Comparando las primeras %zu letras de \"%s\" y \"%s\":\n", n, str1, str2);
    if (ft_strncmp(str1, str2, n) == 0)
        printf("Son iguales en los primeros %zu caracteres.\n", n);
    else
        printf("Son diferentes en los primeros %zu caracteres.\n", n);

    // Comparación completa entre str1 y str3
    n = strlen(str1);
    printf("\nComparando \"%s\" y \"%s\" en sus primeros %zu caracteres:\n", str1, str3, n);
    if (ft_strncmp(str1, str3, n) == 0)
        printf("Son iguales en los primeros %zu caracteres.\n", n);
    else
        printf("Son diferentes en los primeros %zu caracteres.\n", n);

    // Comparación de una cadena corta con una larga (primer carácter)
    n = 1; // Ahora comparamos solo el primer carácter
    printf("\nComparando las primeras %zu letras de \"%s\" y \"%s\":\n", n, str4, str1);
    if (ft_strncmp(str4, str1, n) == 0)
        printf("Son iguales en los primeros %zu caracteres.\n", n);
    else
        printf("Son diferentes en los primeros %zu caracteres.\n", n);

    return 0;
}
*/
