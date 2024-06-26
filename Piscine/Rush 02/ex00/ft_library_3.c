/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_library_3.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:00:43 by iullibar          #+#    #+#             */
/*   Updated: 2024/06/23 16:00:46 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "dictionary.h"

void	int_char(unsigned long long value, char *dest)
{
	char	temp[20];
	char	*point;

	point = temp + 19;
	*point = '\0';
	while (value > 0)
	{
		*--point = (value % 10) + '0';
		value /= 10;
	}
	ft_strcpy(dest, point);
}

int	is_valid_number(const char *str)
{
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

void	free_dictionary(Dictionary *dict)
{
	int	i;

	if (dict)
	{
		i = 0;
		while (i < dict->size)
		{
			free(dict->entries[i].text);
			i++;
		}
		free(dict->entries);
		free(dict);
	}
}

char	*find_in_dictionary(Dictionary *dict, int number)
{
	int	i;

	i = 0;
	while (i < dict->size)
	{
		if (dict->entries[i].number == number)
			return (dict->entries[i].text);
		i++;
	}
	return (NULL);
}

int	ft_big_num(Dictionary *dict, char *result, unsigned long long num)
{
	if (num >= 1000000000)
	{
		ft_bill(dict, result, num / 1000000000);
		num %= 1000000000;
	}
	if (num >= 1000000)
	{
		ft_mill(dict, result, num / 1000000);
		num %= 1000000;
	}
	if (num >= 1000)
	{
		ft_thou(dict, result, num / 1000);
		num %= 1000;
	}
	return (num);
}
