/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:32:59 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/24 07:32:59 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
		len++;

	if (size == 0)
		return (len);

	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (len);
}
/*
#include <stdio.h>

int main(void) 
{
	char src[] = "Hello, World!";
    char dest[20];
    unsigned int size = 8;
    unsigned int len;

    len = ft_strlcpy(dest, src, size);
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %u\n", len);

    return 0;
}
*/