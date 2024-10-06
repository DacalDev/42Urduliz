/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 12:23:10 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 12:23:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return;
	i = 0;
	while (s[i])
	{
		s[i] = ft_toupper(s[i]);
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void	print_char(unsigned int i, char *c)
{
	printf("Index: %u, Char: %c\n", i, *c);
}

int	main(void)
{
	char	str[] = "hello world";

	ft_striteri(str, print_char);
	printf("Resultado: %s\n", str);
	return (0);
}
*/
