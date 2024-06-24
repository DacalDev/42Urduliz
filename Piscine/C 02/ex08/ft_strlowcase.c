/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:33:28 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 07:33:31 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (temp);
}
/*
#include <stdio.h>

char *ft_strlowcase(char *str);

int main(void) {
    char str1[] = "HELLO, World!";
    char str2[] = "42 IS THE ANSWER!";
    char str3[] = "MixedCASE123";
    char str4[] = "already lowercase";
    char str5[] = "";

    printf("Original: %s\n", str1);
    printf("Lowercase: %s\n\n", ft_strlowcase(str1));

    printf("Original: %s\n", str2);
    printf("Lowercase: %s\n\n", ft_strlowcase(str2));

    printf("Original: %s\n", str3);
    printf("Lowercase: %s\n\n", ft_strlowcase(str3));

    printf("Original: %s\n", str4);
    printf("Lowercase: %s\n\n", ft_strlowcase(str4));

    printf("Original: %s\n", str5);
    printf("Lowercase: %s\n", ft_strlowcase(str5));

    return 0;
}
*/