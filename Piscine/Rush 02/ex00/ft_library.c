/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_library.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 14:37:41 by iullibar          #+#    #+#             */
/*   Updated: 2024/06/23 09:55:24 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i ++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (s * r);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n ++;
	}
	dest[i + n] = '\0';
	return (dest);
}

char	*ft_strdup(char *s)
{
	char	*dup;
	int		len;

	len = ft_strlen(s);
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
	{
		return (NULL);
	}
	ft_strcpy(dup, s);
	return (dup);
}

void	ft_thou(Dictionary *dict, char *result, unsigned long long thou)
{
	char	thousands_str[20];
	char	*text;

	int_char(thou, thousands_str);
	text = convert_number_to_text(dict, thousands_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " thousand ");
		free(text);
	}
}

void	ft_mill(Dictionary *dict, char *result, unsigned long long mill)
{
	char	mill_str[20];
	int_char(mill, mill_str);
	char	*text = convert_number_to_text(dict, mill_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " million ");
		free(text);
	}
}

void	ft_bill(Dictionary *dict, char *result, unsigned long long bill)
{
	char	bill_str[20];
	int_char(bill, bill_str);
	char	*text = convert_number_to_text(dict, bill_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " billion ");
		free(text);
	}
}
