/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:26:57 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 10:53:21 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	char	*str[] =
	{
		"12345",
		"adsf",
		"as12",
		"123 432",
		"523"
	};
	int	i;
	int	result;

	i = 0;
	while (i < 5)
	{
		result = ft_str_is_numeric(str[i]);
		if (result == 1)
		{
			printf("Test %d %s is numeric\n", i + 1, str[i]);
		}
		else
		{
			printf("Test %d %s is not numeric\n", i + 1, str[i]);
		}
		i++;
	}
	return (0);
}*/
