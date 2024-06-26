/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:33:37 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 07:33:39 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (temp);
}
/*
#include <stdio.h>

char *ft_strupcase(char *str);

int main(void) {
	char str1[] = "hello, World!";
	char str2[] = "42 is the answer!";
	char str3[] = "MixedCASE123";
	char str4[] = "already UPPERCASE";
	char str5[] = "";

	printf("Original: %s\n", str1);
	printf("Uppercase: %s\n\n", ft_strupcase(str1));

	printf("Original: %s\n", str2);
	printf("Uppercase: %s\n\n", ft_strupcase(str2));

	printf("Original: %s\n", str3);
	printf("Uppercase: %s\n\n", ft_strupcase(str3));

	printf("Original: %s\n", str4);
	printf("Uppercase: %s\n\n", ft_strupcase(str4));

	printf("Original: %s\n", str5);
	printf("Uppercase: %s\n", ft_strupcase(str5));

	return 0;
}
*/