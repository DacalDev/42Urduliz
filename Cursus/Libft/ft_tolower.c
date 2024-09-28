/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:48:45 by marvin            #+#    #+#             */
/*   Updated: 2024/09/28 16:48:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
	{
		return (i + ('a' - 'A'));
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char	letra;
	char	letra_minuscula;

	letra = 'W';
	letra_minuscula = ft_tolower(letra);
	printf("Letra en minúscula: %c\n", letra_minuscula);
	char simbolo = '%';
	printf("Carácter no alfabético: %c\n", ft_tolower(simbolo));
	return (0);
}
*/
