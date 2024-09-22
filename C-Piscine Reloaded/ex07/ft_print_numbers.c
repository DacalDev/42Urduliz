/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:14:13 by marvin            #+#    #+#             */
/*   Updated: 2024/09/22 09:08:43 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 48;
	c = i;
	while (i <= 57)
	{
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