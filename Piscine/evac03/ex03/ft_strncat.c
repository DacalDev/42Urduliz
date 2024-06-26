/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyunquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:00:42 by gyunquer          #+#    #+#             */
/*   Updated: 2024/06/24 20:28:05 by gyunquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

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
int	main(void)
{
	char	dest[50] = "Hello, ";
	char	*src = "world!";
	unsigned int	i = 2;

	printf("Before strcat: %s\n", dest);
	ft_strncat(dest, src, i);
	printf("After strcat: %s\n", dest);
	return (0);
}
*/
