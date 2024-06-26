/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:38:21 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/26 17:02:51 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst_len < size && dest[dst_len] != '\0')
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	dest[25] = "Hello, ";
	char	*src = "world!";

	printf("resultado de funcion :%d \n", ft_strlcat(dest, src, sizeof(dest)));
	write(1, "Resulting string: ", 18);
	printf("%s \n", dest);
	return (0);
}
*/
