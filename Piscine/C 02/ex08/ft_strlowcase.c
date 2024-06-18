/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 15:05:24 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 15:08:27 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[] = "asdf89q ";
	char	str2[] = "ASDFGHJKL";
	char	str3[] = "aBcDeFgHiJkLmNoP";
	
	printf("Original: %s\n", str1);
	printf("Strupcased: %s\n", ft_strlowcase(str1));

	printf("Original: %s\n", str2);
	printf("Strupcased: %s\n", ft_strlowcase(str2));

	printf("Original: %s\n", str3);
	printf("Strupcased: %s\n", ft_strlowcase(str3));
	return (0);
}
*/
