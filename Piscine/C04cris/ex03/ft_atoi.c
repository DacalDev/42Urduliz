/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:01:32 by csanchez          #+#    #+#             */
/*   Updated: 2024/06/22 19:06:17 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (r * s);
}
/*
#include <stdio.h>

int main(void)
{
    char str1[] = "   -12-34";
    char str2[] = "   -5678";
    char str3[] = "8011	";
    char str4[] = "abc123";  //retorna 0 no comienza con un número
    char str5[] = "42abc";  //retorna -42 e ignora parte no numéric
    
    printf("String: '%s' -> Integer: %d\n", str1, ft_atoi(str1));
    printf("String: '%s' -> Integer: %d\n", str2, ft_atoi(str2));
    printf("String: '%s' -> Integer: %d\n", str3, ft_atoi(str3));
    printf("String: '%s' -> Integer: %d\n", str4, ft_atoi(str4));
    printf("String: '%s' -> Integer: %d\n", str5, ft_atoi(str5));
    
    return 0;
}*/
