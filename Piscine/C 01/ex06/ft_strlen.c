/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:21:54 by danperez          #+#    #+#             */
/*   Updated: 2024/06/15 19:30:16 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	char	str2[] = "¡hola mundo!";
	int	len;

	len = ft_strlen(str2);

	printf("El largo del string es: %d", len);

	return (0);
}

