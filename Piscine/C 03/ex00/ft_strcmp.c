/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:34:46 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 10:14:39 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*
#include <stdio.h>

int main() 
{
    char str1[] = "Hola";
    char str2[] = "Mundo";
    char str3[] = "Hola";

    printf("Comparando '%s' con '%s': %d\n", str1, str2, ft_strcmp(str1, str2));
    printf("Comparando '%s' con '%s': %d\n", str1, str3, ft_strcmp(str1, str3));
    printf("Comparando '%s' con '%s': %d\n", str2, str3, ft_strcmp(str2, str3));

    return (0);
}
*/
