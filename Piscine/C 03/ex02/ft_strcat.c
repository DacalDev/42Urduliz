/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:36:04 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/06/27 08:08:51 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "ABC";
	char	*src;

	src = "DEF";
	printf("SRC=%s\n", src);
	printf("DEST=%s\n", dest);
	ft_strcat(dest, src);
	printf("DEST=%s\n", dest);
	return (0);
}
*/