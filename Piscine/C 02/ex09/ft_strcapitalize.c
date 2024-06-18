/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:48:23 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 19:26:39 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		i;
	int		f;

	i = 0;
	temp = str;
	while (str[i] != '\0')
	{
		f = str[i - 1];
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if ((i > 0) && (f == ' ' || f == '-' || f == '+'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas
       	? 42mots quarante-deux; cinquante+et+un";
	
	printf("original: %s\n", str);
	ft_strcapitalize(str);
	printf("capitalize: %s\n", str);
	return (0);
}
*/
