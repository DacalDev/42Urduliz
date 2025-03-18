/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:04:09 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/10/01 11:19:34 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub_str, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*sub_str)
		return ((char *)str);
	while (str[i] && i < len)
	{
		if (str[i] == sub_str[0])
		{
			j = 0;
			while (sub_str[j] && str[i + j] && (i + j) < len
				&& str[i + j] == sub_str[j])
				j++;
			if (!sub_str[j])
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
