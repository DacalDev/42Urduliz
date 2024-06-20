/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isalpa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:29:02 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/20 15:41:54 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
        {        
            return (0);
        }
        *str++;
    }
    return (1);
}
/*
#include <stdio.h>

int main()
{
    // Caso 1: Cadena vacía
    char str1[] = "";
    printf("Caso 1: %s - %d\n", str1, ft_str_is_alpha(str1)); // Esperado: 1

    // Caso 2: Cadena con solo letras
    char str2[] = "HolaMundo";
    printf("Caso 2: %s - %d\n", str2, ft_str_is_alpha(str2)); // Esperado: 1

    // Caso 3: Cadena con letras y números
    char str3[] = "Hola123";
    printf("Caso 3: %s - %d\n", str3, ft_str_is_alpha(str3)); // Esperado: 0

    // Caso 4: Cadena con letras y caracteres especiales
    char str4[] = "Hello!";
    printf("Caso 4: %s - %d\n", str4, ft_str_is_alpha(str4)); // Esperado: 0

    // Caso 5: Cadena con solo mayúsculas
    char str5[] = "HELLO";
    printf("Caso 5: %s - %d\n", str5, ft_str_is_alpha(str5)); // Esperado: 1

    // Caso 6: Cadena con solo minúsculas
    char str6[] = "world";
    printf("Caso 6: %s - %d\n", str6, ft_str_is_alpha(str6)); // Esperado: 1

    // Caso 7: Cadena con espacio
    char str7[] = "Hello World";
    printf("Caso 7: %s - %d\n", str7, ft_str_is_alpha(str7)); // Esperado: 0

    return 0;
}
*/