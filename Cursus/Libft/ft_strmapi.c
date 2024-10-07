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

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>

char	to_uppercase(unsigned int index, char c)
{
	if (index % 2 == 0)  // Por ejemplo, cambia los caracteres en índices pares
		return (ft_toupper(c));  // Usamos tu propia función ft_toupper para convertir a mayúsculas.
	return (c);  // Deja el resto de los caracteres sin cambios.
}

int main(void)
{
	char *result = ft_strmapi("hola mundo", to_uppercase);
	if (result)
	{
		printf("Resultado: %s\n", result);  // Imprime: "HoLa MuNdO"
		free(result);
	}
	return (0);
}
*/
