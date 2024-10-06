/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 08:57:47 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 08:57:47 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

char	*ft_strmapi(char const *s)
{
	unsigned int	i;
	char			*result;

	if (!s)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (i % 2 == 0 && s[i] >= 'a' && s[i] <= 'z')
			result[i] = ft_toupper(s[i]);
		else
			result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s = "hello world";
	char	*result;

	result = ft_strmapi(s);
	if (result)
	{
		printf("Resultado: %s\n", result); // Salida esperada: "HeLlO WoRlD"
		free(result); // Liberamos la memoria
	}
	return (0);
}
*/
