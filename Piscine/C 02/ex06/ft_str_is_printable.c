/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:47:45 by danperez          #+#    #+#             */
/*   Updated: 2024/06/17 20:24:39 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
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
		"",
		"\0a\ndfs",
		"asdf\0",
		"asdf123 ",
		"as23\n ",
		"a . =/*¡",
		"asfdª!·$%&/()"
	};
	int	i;
	int	result;

	i = 0;
	while (i < 7)
	{
		result = ft_str_is_printable(strs[i]);
		if (result == 1)
		{
			printf("%s is printable\n", strs[i]);
		}
		else
		{
			printf("%s is not printable\n", strs[i]);
		}
		i++;
	}
}
*/
