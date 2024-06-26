/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:00:24 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/26 19:19:09 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned *)s1 - *(unsigned char *)s2);
}

/*
#include <unistd.h>

int	main(void)
{
	char	test1[] = "ABA ABZ";
	char	test2[] = "ABZ";
	int		result;

	result = ft_strcmp(test1, test2);
	if (result == 0)
		write(1, "Las 2 cadenas son iguales.", 26);
	else
	{
		if (result < 0)
			write(1, "La 1 cadena es menor", 20);
		else
			write(1, "La 2 cadenas es menor", 20);
	}
	write(1, "\n", 1);
	return (0);
}
*/