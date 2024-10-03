/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:52:01 by marvin            #+#    #+#             */
/*   Updated: 2024/10/03 10:52:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed_str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	strncpy(trimmed_str, &s1[start], end - start);
	trimmed_str[end - start] = '\0';
	return (trimmed_str);
}
/*
#include <stdio.h>

int	main()
{
	char *s1 = "   ---Hola, mundo---   ";
	char *set = " -";
	char *trimmed;

	trimmed = ft_strtrim(s1, set);
	if (trimmed)
	{
		printf("Resultado: '%s'\n", trimmed);  // Esperado: "Hola, mundo"
		free(trimmed); // Liberar la memoria
	}
	else
		printf("Error al recortar la cadena.\n");
	return (0);
}
*/
