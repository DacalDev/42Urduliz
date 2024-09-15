/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:53:47 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 14:53:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // Para usar la función write

// Función para imprimir un solo carácter
void ft_putchar(char c)
{
    write(1, &c, 1); // Imprime el carácter en la salida estándar
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1; // Empieza en 1 porque argv[0] es el nombre del programa
    while (i < argc) // Recorre los argumentos dados
    {
        j = 0; // Recorre cada carácter del argumento
        while (argv[i][j] != '\0') // Recorre cada carácter del string hasta el final
        {
            ft_putchar(argv[i][j]); // Imprime cada carácter usando ft_putchar
            j++;
        }
        ft_putchar('\n'); // Imprime un salto de línea después de cada argumento
        i++;
    }
    return 0; // Indica que el programa terminó correctamente
}