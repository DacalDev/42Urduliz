/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:56:48 by marvin            #+#    #+#             */
/*   Updated: 2024/09/13 18:01:30 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

int main() 
{
    int x = 5;
    int y = 10;

    printf("Antes de intercambiar: x = %d, y = %d\n", x, y);

    ft_swap(&x, &y);

    printf("Después de intercambiar: x = %d, y = %d\n", x, y);

    return 0;
}