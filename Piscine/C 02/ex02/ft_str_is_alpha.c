/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:53:36 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 10:22:17 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && (*str < 'a' || *str > 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
//	char	str[] = "ola*+/-";
	char	*test_strings[] = 
	{
        	"Hola mundo",
		"abc",
		"A-Z",
		"az",
		"!@#$%",
		"Maní",
		"hello",
		"Héllo wórld",
		"H3ll0 w0rld"
	};
	int	i;
	int	result;

	i = 0;
	
	while (i < 9)
	{
		result = ft_str_is_alpha(test_strings[i]);
		if (result == 1)
		{
			printf("Test %d is alpha: %s\n", i + 1, test_strings[i]);
		}
		else
		{
			printf("Test %d is not alpha: %s\n", i + 1, test_strings[i]);
		}
		i++;
	}
	return (0);
}
*/
