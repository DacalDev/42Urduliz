/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstrncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:57:59 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/19 18:29:23 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int    i;

    i = 0;
    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i > n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

void print_result(char *label, char *str, unsigned int n) {
    write(1, label, strlen(label));
    write(1, str, n);
    write(1, "\n", 1);
}

unsigned int strlen(char *str) 
{
    unsigned int len = 0;
    while (str[len] != '\0') 
    {
        len++;
    }
    return len;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Asegúrate de que el destino tenga suficiente espacio

    // Prueba ft_strncpy con diferentes valores de n
    ft_strncpy(dest, src, 5);
    print_result("Destino (n=5): '", dest, 5);

    ft_strncpy(dest, src, 20);
    print_result("Destino (n=20): '", dest, strlen(dest));

    ft_strncpy(dest, src, 0);
    print_result("Destino (n=0): '", dest, strlen(dest));

    ft_strncpy(dest, src, 13);
    print_result("Destino (n=13): '", dest, strlen(dest));

    return 0;
}