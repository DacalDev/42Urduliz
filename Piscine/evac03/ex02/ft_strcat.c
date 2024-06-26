/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyunquer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 13:58:28 by gyunquer          #+#    #+#             */
/*   Updated: 2024/06/24 19:35:04 by gyunquer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 The  strcat() function appends the src string to the dest string, over‐
 writing the terminating null byte ('\0') at the end of dest,  and  then
 adds  a  terminating  null  byte.  The strings may not overlap, and the
 dest string must have enough space for the  result.   If  dest  is  not
 large  enough, program behavior is unpredictable; buffer overruns are a
 favorite avenue for attacking secure programs.

#include <unistd.h>
#include <stdio.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr)
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
}*/
