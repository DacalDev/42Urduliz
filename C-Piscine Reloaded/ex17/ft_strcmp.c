/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:44:43 by marvin            #+#    #+#             */
/*   Updated: 2024/09/15 14:44:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <unistd.h>

int	main(void)
{
	char	test1[] = "ABZ444";
	char	test2[] = "ABZ";
	int		result;

	result = ft_strcmp(test1, test2);
	if (result == 0)
		write(1, "Las 2 cadenas son iguales.", 26);
	else
	{
		if (result < 0)
			write(1, "La 1ª cadena es menor", 22);
		else
			write(1, "La 2ª cadena es menor", 22);
	}
	write(1, "\n", 1);
	return (0);
}