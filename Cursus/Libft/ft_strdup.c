/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 11:13:19 by marvin            #+#    #+#             */
/*   Updated: 2024/10/02 11:13:19 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s);
	dup = (char *)malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int main()
{
	const char *original = "Hola, mundo!";
	char *duplicado = ft_strdup(original);

	if (duplicado == NULL)
	{
		printf("Error al duplicar la cadena.\n");
		return 1;
	}

	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicado);

	// Liberar la memoria asignada para la cadena duplicada
	free(duplicado);

	return 0;
}
*/
