/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:33:18 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 07:33:20 by jdacal-a         ###   ########.fr       */
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

char *ft_strcapitalize(char *str);

int main(void) {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));

    return 0;
}
*/