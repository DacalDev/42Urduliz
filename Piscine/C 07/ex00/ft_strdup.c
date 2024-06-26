/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 08:50:33 by amacarul          #+#    #+#             */
/*   Updated: 2024/06/24 09:28:23 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str ++;
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig_dest;

	orig_dest = dest;
	while (*src)
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (orig_dest);
}

char	*ft_strdup(char *src)
{
	char	*duplicated;

	if (ft_strlen(src) == 0)
		return (NULL);
	duplicated = (char *)malloc(ft_strlen(src) + 1);
	if (duplicated == NULL)
	{
		ft_putstr("Error! It could not allocate memory space");
		return (NULL);
	}
	ft_strcpy(duplicated, src);
	return (duplicated);
}
/*
int	main()
{
	char	*my_src = "Duplicando un string";
	char	*my_duplicated;

	my_duplicated = ft_strdup(my_src);
	ft_putstr(my_duplicated);
	return (0);
}*/
