/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 13:27:34 by marvin            #+#    #+#             */
/*   Updated: 2024/09/28 13:27:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (i - ('a' - 'A'));
	}
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char	letra;
	char	letra_mayuscula;

	letra = 'x';
	letra_mayuscula = ft_toupper(letra);
	printf("Letra en mayúscula: %c\n", letra_mayuscula);
	char simbolo = '%';
	printf("Carácter no alfabético: %c\n", ft_toupper(simbolo));
	return (0);
}
*/
