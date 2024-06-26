/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:03:22 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/26 16:13:31 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int ft_str_is_printable(char *str);

int main() {
	char test1[] = "Hello, world!";
	char test2[] = "Special\tcharacters\n";
	char test3[] = "1234567890";
	char test4[] = "";

	printf("Test 1 (\"Hello, world!\"): %d\n", ft_str_is_printable(test1));
	printf("Test 2 (\"Sal\\tchrs\\n\"): %d\n", ft_str_is_printable(test2));
	printf("Test 3 (\"1234567890\"): %d\n", ft_str_is_printable(test3));
	printf("Test 4 (\"\"): %d\n", ft_str_is_printable(test4));

	return (0);
}
*/
