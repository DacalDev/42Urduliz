/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:06:30 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 11:06:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
		{
			return (*ptr1 - *ptr2);
		}
		ptr1++;
		ptr2++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main()
{
	const char str1[] = "Hola, mundo";
	const char str2[] = "Hola, amigo";
	const char str3[] = "Hola, mundo";

    // Comparar los primeros 10 caracteres de str1 y str2
    int resultado1 = ft_memcmp(str1, str2, 10);
    if (resultado1 < 0) {
        printf("str1 es menor que str2\n");
    } else if (resultado1 > 0) {
        printf("str1 es mayor que str2\n");
    } else {
        printf("str1 es igual a str2\n");
    }

    // Comparar los primeros 11 caracteres de str1 y str3
    int resultado2 = ft_memcmp(str1, str3, 11);
    if (resultado2 < 0) {
        printf("str1 es menor que str3\n");
    } else if (resultado2 > 0) {
        printf("str1 es mayor que str3\n");
    } else {
        printf("str1 es igual a str3\n");
    }

    return 0;
}
