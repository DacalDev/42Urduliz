/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   703-day.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:25:35 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/01/18 13:06:02 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int		num1;
	char	extra;

	printf("Introduce un numero entero:\n");
	if (scanf("%d%c", &num1, &extra) != 2 || extra != '\n')
	{
		printf("Error en la entrada.\n");
		return (1);
	}
	else if (num1 % 2 == 0)
		printf("El numero es Par\n");
	else
		printf("El numero es Impar\n");
	return (0);
}
