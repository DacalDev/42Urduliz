/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 19:04:19 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/22 10:22:50 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
		if (nb == 0 || nb == 1)
		{
			return (nb);
		}
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int ft_sqrt(int nb);

int main()
{
    printf("Raíz cuadrada de 25: %d\n", ft_sqrt(25));
    printf("Raíz cuadrada de 16: %d\n", ft_sqrt(16));
    printf("Raíz cuadrada de 26: %d\n", ft_sqrt(26));
    printf("Raíz cuadrada de 0: %d\n", ft_sqrt(0));
    printf("Raíz cuadrada de -4: %d\n", ft_sqrt(-4));
    return 0;
}
*/
