/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:37:14 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/27 08:12:26 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (nb > 0 && *src != '\0')
	{
		*ptr = *src;
		++ptr;
		++src;
		--nb;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "Hello, ";
	char	*src = "world!";
	unsigned int	i = 3;

	printf("Before strncat: %s\n", dest);
	ft_strncat(dest, src, i);
	printf("After strncat: %s\n", dest);
	return (0);
}
*/