/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 00:51:24 by danperez          #+#    #+#             */
/*   Updated: 2024/06/17 20:07:11 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = 'z';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	str1[] = "Hola mundo!";
	//char	str2[20];
	unsigned int	n = 3;
	char	*str2 = malloc(n + 1);
	
	ft_strncpy(str2, str1, n);
	//str2[n] = '\0';
	printf("src: %s\ndest: %s\n", str1, str2);
	free(str2);
	return (0);
}