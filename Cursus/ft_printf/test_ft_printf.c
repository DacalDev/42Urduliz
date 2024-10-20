/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_printf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:55:44 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:55:44 by marvin           ###   ########.fr       */
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

	ret1 = printf("%d\n", 123);
	ret2 = ft_printf("%d\n", 123);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%x\n", 255);
	ret2 = ft_printf("%x\n", 255);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	ret1 = printf("%p\n", (void*)0xdeadbeef);
	ret2 = ft_printf("%p\n", (void*)0xdeadbeef);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	/* Caso 1: Cadena nula
	ret1 = printf("printf: %s\n", (char *)NULL); // Comportamiento indefinido, pero igual que printf.
	ret2 = ft_printf("ft_printf: %s\n", (char *)NULL); // Se comporta igual.
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2); */

	// Caso 2: Cadena vacía
	ret1 = printf("printf: %s\n", "");
	ret2 = ft_printf("ft_printf: %s\n", "");
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 3: Especificador de porcentaje
	ret1 = printf("printf: %%\n");
	ret2 = ft_printf("ft_printf: %%\n");
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 4: Enteros negativos
	ret1 = printf("printf: %d\n", -42);
	ret2 = ft_printf("ft_printf: %d\n", -42);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 5: Números hexadecimales
	ret1 = printf("printf: %x\n", 255);
	ret2 = ft_printf("ft_printf: %x\n", 255);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 6: Números enteros extremos
	ret1 = printf("printf: %d\n", (int)-2147483648);
	ret2 = ft_printf("ft_printf: %d\n", (int)-2147483648);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	// Caso 7: Puntero
	int a = 42;
	ret1 = printf("printf: %p\n", (void *)&a);
	ret2 = ft_printf("ft_printf: %p\n", (void *)&a);
	printf("Return printf: %d, Return ft_printf: %d\n\n", ret1, ret2);

	return 0;
}
