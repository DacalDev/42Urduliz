/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:25:25 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 15:25:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // Para usar malloc

// Función que duplica la cadena src
char *ft_strdup(char *src)
{
    int i = 0;
    char *copy;

    // Primero, calcular la longitud de la cadena original y asignar memoria
    while (src[i] != '\0')
        i++;
    
    // Asignar memoria suficiente para copiar la cadena, más el carácter nulo '\0'
    copy = (char *)malloc((i + 1) * sizeof(char));
    if (copy == NULL) // Verificar si malloc falló
        return NULL;

    // Reiniciar i para usarlo al copiar los caracteres
    i = 0;
    while (src[i] != '\0') // Copiar los caracteres de src a copy
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0'; // Terminar la nueva cadena con el carácter nulo

    return copy; // Devolver el puntero a la nueva cadena duplicada
}

#include <stdio.h>

int main()
{
    char *original = "Hola mundo";
    char *duplicado = ft_strdup(original);

    if (duplicado != NULL)
    {
        printf("Original: %s\n", original);
        printf("Duplicado: %s\n", duplicado);
        free(duplicado); // Liberar la memoria asignada para evitar fugas
    }

    return 0;
}