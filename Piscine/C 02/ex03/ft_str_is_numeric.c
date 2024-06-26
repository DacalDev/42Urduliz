/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isnumeric.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 15:44:00 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/20 16:10:57 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return(1);
}
/*
#include <stdio.h>

int main()
{
    // Caso 1: Cadena vacía
    char str1[] = "";
    printf("Caso 1: \"%s\" - %d\n", str1, ft_str_is_numeric(str1));

    // Caso 2: Cadena con solo números
    char str2[] = "123456";
    printf("Caso 2: \"%s\" - %d\n", str2, ft_str_is_numeric(str2));

    // Caso 3: Cadena con números y letras
    char str3[] = "123abc";
    printf("Caso 3: \"%s\" - %d\n", str3, ft_str_is_numeric(str3));

    // Caso 4: Cadena con números y caracteres especiales
    char str4[] = "123!";
    printf("Caso 4: \"%s\" - %d\n", str4, ft_str_is_numeric(str4));

    // Caso 5: Cadena con solo letras
    char str5[] = "abc";
    printf("Caso 5: \"%s\" - %d\n", str5, ft_str_is_numeric(str5));

    // Caso 6: Cadena con números y espacios
    char str6[] = "123 456";
    printf("Caso 6: \"%s\" - %d\n", str6, ft_str_is_numeric(str6));

    return 0;
}
*/
