/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:19:53 by marvin            #+#    #+#             */
/*   Updated: 2024/09/19 17:01:16 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Para usar la función write

// Función para imprimir un solo carácter
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Función para comparar dos cadenas, similar a strcmp
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]); // Devuelve la diferencia entre los caracteres
}

int main(int argc, char **argv)
{
    int i, j;
    char *temp;

    // Ordenar los argumentos usando el método de burbuja (bubble sort)
    i = 1;
    while (i < argc - 1)
    {
        j = 1;
        while (j < argc - 1)
        {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0)
            {
                // Intercambiar los argumentos si están en el orden incorrecto
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
            j++;
        }
        i++;
    }

    // Imprimir los argumentos ordenados
    i = 1; // Empezar desde argv[1], omitiendo argv[0]
    while (i < argc)
    {
        j = 0;
        while (argv[i][j] != '\0') // Imprimir cada carácter de la cadena
        {
            ft_putchar(argv[i][j]); // Imprime un carácter a la vez
            j++;
        }
        ft_putchar('\n'); // Imprime un salto de línea al final del argumento
        i++;
    }

    return 0;
}