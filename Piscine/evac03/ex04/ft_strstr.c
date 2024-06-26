/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:36:18 by gyunquer          #+#    #+#             */
/*   Updated: 2024/06/25 20:25:02 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>


char	*ft_strstr(char *str, char *to_find)
{
	char	*string;
	char	*sub_string;

	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		string = str;
		sub_string = to_find;
		while (*string == *sub_string && *sub_string != '\0')
		{
			string++;
			sub_string++;
		}
		if (*sub_string == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}


int	main(void)
{
	char	str[] = "Hello, world!";
	char	to_find[] = "world";
	char	*result = ft_strstr(str, to_find);

	if (result)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found.\n");
	return (0);
}
