/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:35:25 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/26 17:01:44 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 && (*s1 == *s2) && (n > 0))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
#include <unistd.h>

int	main(void)
{
	char	*test1;
	char	*test2;
	int		result;

	test1 = "ABA ABZ";
	test2 = "ABZ";
	result = ft_strncmp(test1, test2, 2);
	if (result == 0)
		write(1, "Las 2 cadenas son iguales.", 26);
	else
	{
		if (result < 0)
			write(1, "La 1 cadena es menor", 20);
		else
			write(1, "La 2 cadena es menor", 20);
	}
	write(1, "\n", 1);
	test1 = "ABA ABZ";
	test2 = "ABZ";
	result = ft_strncmp(test1, test2, 3);
	if (result == 0)
		write(1, "Las 2 cadenas son iguales.", 26);
	else
	{
		if (result < 0)
			write(1, "La 1 cadena es menor", 20);
		else
			write(1, "La 2 cadena es menor", 20);
	}
	write(1, "\n", 1);
	test1 = "ABZ ABZ";
	test2 = "ABA ABZ ABZ";
	result = ft_strncmp(test1, test2, 3);
	if (result == 0)
		write(1, "Las 2 cadenas son iguales.", 26);
	else
	{
		if (result < 0)
			write(1, "La 1 cadena es menor", 20);
		else
			write(1, "La 2 cadena es menor", 20);
	}
	write(1, "\n", 1);
	return (0);
}
*/
