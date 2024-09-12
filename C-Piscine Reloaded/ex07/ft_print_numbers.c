/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:14:13 by marvin            #+#    #+#             */
/*   Updated: 2024/09/12 22:14:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    int i;

    i = 48; // El valor ASCII de '0' es 48
    while (i <= 57) // El valor ASCII de '9' es 57
    {
        char c = i; // Convertimos el entero a char antes de escribirlo
        write(1, &c, 1);
        i++;
    }
}
/*
int main(void)
{
    ft_print_numbers();
    return(0);
}
*/

/*
OTRA VERSIÓN - en este caso trabajamos directamente con char y no
usamos la tabla ASCII:

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
*/