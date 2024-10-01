/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:04:09 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/10/01 11:19:34 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef unsigned long size_t;

char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*sub_str)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == sub_str[0])
		{
			j = 0;
			while (sub_str[j] && str[i + j] && (i + j) < len
				&& str[i + j] == sub_str[j])
				j++;
			if (!sub_str[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main()
{
	const char	*str = "Hola, bienvenido a la programación en C";
	const char	*sub_str = "bienvenido";
	size_t len = 30;
	char *result = ft_strnstr(str, sub_str, len);
	if (result != 0)
	{
		printf("Subcadena encontrada: %s\n", result);
	}
	else
	{
		printf("Subcadena no encontrada en los primeros %zu caracteres.\n", len);
	}
	return (0);
}
*/
