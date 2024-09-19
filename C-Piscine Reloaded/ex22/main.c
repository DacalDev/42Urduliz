/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:28:06 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/19 17:28:31 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int main(void)
{
    int a = -5;
    int b = 3;
    int c = 0;

    // Prueba de la macro ABS
    printf("ABS(%d) = %d\n", a, ABS(a));  // Debería imprimir 5
    printf("ABS(%d) = %d\n", b, ABS(b));  // Debería imprimir 3
    printf("ABS(%d) = %d\n", c, ABS(c));  // Debería imprimir 0

    // Prueba con una expresión
    printf("ABS(%d - %d) = %d\n", a, b, ABS(a - b));  // Debería imprimir 8

    return 0;
}