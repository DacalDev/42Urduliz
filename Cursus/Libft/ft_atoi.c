/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:25:20 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/10/01 11:34:25 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		||str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10 + (str[i] - '0'));
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d\n", ft_atoi("   -12345"));  // Salida: -12345
	printf("%d\n", ft_atoi("42"));         // Salida: 42
	printf("%d\n", ft_atoi("  +5678"));    // Salida: 5678
	printf("%d\n", ft_atoi("   987abc"));  // Salida: 987 (se detiene cuando encuentra 'a')
	return (0);
}
*/
