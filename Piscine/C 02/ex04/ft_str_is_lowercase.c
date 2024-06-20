/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:12:37 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/20 16:17:34 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_lowercase(char *str)
{
    while (*str)
    {
        if (*str < 'a' || *str > 'z')
        {
            return (0);
        }
        str++;
    }
    return (1);
}
/*
#include <stdio.h>

int main()
{
    // Caso 1: Cadena vacía
    char str1[] = "";
    printf("Caso 1: \"%s\" - %d\n", str1, ft_str_is_lowercase(str1)); // Esperado: 1

    // Caso 2: Cadena con solo minúsculas
    char str2[] = "hola";
    printf("Caso 2: \"%s\" - %d\n", str2, ft_str_is_lowercase(str2)); // Esperado: 1

    // Caso 3: Cadena con minúsculas y mayúsculas
    char str3[] = "Hola";
    printf("Caso 3: \"%s\" - %d\n", str3, ft_str_is_lowercase(str3)); // Esperado: 0

    // Caso 4: Cadena con minúsculas y números
    char str4[] = "hola123";
    printf("Caso 4: \"%s\" - %d\n", str4, ft_str_is_lowercase(str4)); // Esperado: 0

    // Caso 5: Cadena con minúsculas y caracteres especiales
    char str5[] = "hola!";
    printf("Caso 5: \"%s\" - %d\n", str5, ft_str_is_lowercase(str5)); // Esperado: 0

    // Caso 6: Cadena con solo mayúsculas
    char str6[] = "HOLA";
    printf("Caso 6: \"%s\" - %d\n", str6, ft_str_is_lowercase(str6)); // Esperado: 0

    // Caso 7: Cadena con minúsculas y espacios
    char str7[] = "hola mundo";
    printf("Caso 7: \"%s\" - %d\n", str7, ft_str_is_lowercase(str7)); // Esperado: 0

    return 0;
}
*/