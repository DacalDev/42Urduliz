/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 10:56:34 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 11:08:15 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
	char	*strings[] =
	{
		"asDf",
		"asdf",
		"123",
		"as df",
		"nlz"
	};
	int	i;
	int	result;

	i = 0;
	while (i < 5)
	{
		result = ft_str_is_lowercase(strings[i]);
		if (result == 1)
		{
			printf("%s is lowercase\n", strings[i]);
		}
		else
		{
			printf("%s is not lowercase\n", strings[i]);
		}
		i++;
	}
	return (0);
}
*/
