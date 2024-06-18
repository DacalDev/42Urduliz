/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 11:19:42 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 11:35:12 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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
	char	*strs[] =
	{
		"asf",
		"ADF",
		"aDf",
		"12DF",
		"DAFA ADF",
		"POTRT"
	};
	int	i;
	int	result;

	i = 0;
	while (i < 6)
	{
		result = ft_str_is_uppercase(strs[i]);
		if (result == 1)
		{
			printf("%s is uppercase\n", strs[i]);
		}
		else
		{
			printf("%s is not uppercase\n", strs[i]);
		}
		i++;
	}
	return (0);
}
*/
