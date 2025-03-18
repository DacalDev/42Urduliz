/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:24:17 by marvin            #+#    #+#             */
/*   Updated: 2024/09/30 09:24:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*last_char;

	last_char = 0;
	while (*str != '\0')
	{
		if (*str == (char)c)
		{
			last_char = (char *)str;
		}
		str++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (last_char);
}
