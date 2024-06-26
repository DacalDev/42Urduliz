/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyunquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:10:24 by gyunquer          #+#    #+#             */
/*   Updated: 2024/06/24 12:25:07 by gyunquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 	int     ft_strcmp(char *s1, char *s2);

	return 0, if s1 and s2 are equal.
	return negative, if s1 is less than s2.	ABA ABZ > -25
	return positive, if s1 is greater than s2. ABJ ABC > 7
*/
/*
#include <unistd.h>
*/

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
