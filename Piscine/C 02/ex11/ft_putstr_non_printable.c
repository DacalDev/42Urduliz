/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:34:25 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 08:50:41 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar(hex[(*str >> 4) & 0xF]);
			ft_putchar(hex[*str & 0xF]);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	char	*str1;
	char	*str2;
	char	*str3;

	str = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	ft_putchar('\n');
	str1 = "This is\ta test.!"; // Contiene un carácter no imprimible (\t)
	ft_putstr_non_printable(str1);
	ft_putchar('\n');
	str2 = "Non-printable:\x01\x02\x03"; // Contiene caracteres no imprimibles (\x01, \x02, \x03)
	ft_putstr_non_printable(str2);
	ft_putchar('\n');
	str3 = "Hello\nWorld!"; // Contiene un carácter no imprimible (\n)
	ft_putstr_non_printable(str3);
	ft_putchar('\n');
	return (0);
}
*/
