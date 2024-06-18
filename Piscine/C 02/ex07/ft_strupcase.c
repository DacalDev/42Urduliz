/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:37:40 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 14:57:56 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*temp;

	temp = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
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
	printf("Strupcased: %s\n", ft_strupcase(str1));

	printf("Original: %s\n", str2);
	printf("Strupcased: %s\n", ft_strupcase(str2));

	printf("Original: %s\n", str3);
	printf("Strupcased: %s\n", ft_strupcase(str3));
	return (0);
}
*/
