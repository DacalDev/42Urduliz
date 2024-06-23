/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isupperase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 08:30:50 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/23 18:52:59 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
    while (*str)
    {
        if (*str < 'A' || *str > 'Z')
        {
            return (0);
        }
        str++;
    }
    return (1);
}
/*
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main() {
    char test1[] = "HELLO";
    char test2[] = "Hello";
    char test3[] = "123ABC";
    char test4[] = "";

    printf("Test 1 (\"HELLO\"): %d\n", ft_str_is_uppercase(test1));
    printf("Test 2 (\"Hello\"): %d\n", ft_str_is_uppercase(test2));
    printf("Test 3 (\"123ABC\"): %d\n", ft_str_is_uppercase(test3));
    printf("Test 4 (\"\"): %d\n", ft_str_is_uppercase(test4));

    return 0;
}
*/