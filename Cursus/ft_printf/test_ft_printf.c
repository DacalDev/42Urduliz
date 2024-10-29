/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 10:14:25 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int ret1, ret2;

	// Comparando los mismos mensajes
	ret1 = printf("Hola Mundo\n");
	ret2 = ft_printf("Hola Mundo\n");
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%d\n", 1230);
	ret2 = ft_printf("%d\n", 1230);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%x\n", 1200);
	ret2 = ft_printf("%x\n", 1200);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%p\n", (void*)0xdeadbeef);
	ret2 = ft_printf("%p\n", (void*)0xdeadbeef);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 1: Cadena nula
	ret1 = printf("%s\n", (char *)NULL);
	ret2 = ft_printf("%s\n", (char *)NULL);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 2: Cadena vacía
	ret1 = printf("%s\n", "");
	ret2 = ft_printf("%s\n", "");
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 3: Especificador de porcentaje
	ret1 = printf("%%\n");
	ret2 = ft_printf("%%\n");
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 4: Enteros negativos
	ret1 = printf("%d\n", -4200000);
	ret2 = ft_printf("%d\n", -4200000);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 5: Números hexadecimales
	ret1 = printf("%x\n", 255);
	ret2 = ft_printf("%x\n", 255);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 6: Números enteros extremos
	ret1 = printf("%d\n", (int)-2147483648);
	ret2 = ft_printf("%d\n", (int)-2147483648);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 7: Puntero
	int a = 42;
	ret1 = printf("%p\n", (void *)&a);
	ret2 = ft_printf("%p\n", (void *)&a);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%p\n", (char *)NULL);
	ret2 = ft_printf("%p\n", (char *)NULL);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 8: Números sin signo
	ret1 = printf("%u\n", 4294967295);
	ret2 = ft_printf("%u\n", 4294967295);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%u\n", 0);  // Caso límite inferior
	ret2 = ft_printf("%u\n", 0);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%u\n", 123456789);  // Caso general
	ret2 = ft_printf("%u\n", 123456789);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 9: Números negativos con %u
	ret1 = printf("%u\n", -1);
	ret2 = ft_printf("%u\n", -1);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%u\n", -42);
	ret2 = ft_printf("%u\n", -42);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%u\n", -123456789);
	ret2 = ft_printf("%u\n", -123456789);
	printf("Return printf: %d, Return ft_printf: %d\n", ret1, ret2);

	return 0;
}
