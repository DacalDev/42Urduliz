/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:30:41 by marvin            #+#    #+#             */
/*   Updated: 2024/06/23 11:02:59 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include <limits.h>
#include <errno.h>

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "dictionary.h"

char	*convert_number_to_text(Dictionary *dict, const char *number)
{
	unsigned long long	num;
	char				*text;
	char				*final_result;
	char				*result;

	num = ft_strtoull(number, NULL, 10);
	result = malloc(2048);
	if (!result)
		return (NULL);
	result[0] = '\0';
	if (num == 0)
	{
		text = find_in_dictionary(dict, 0);
		if (text)
		{
			return (ft_strdup(text));
		}
	}
	num = ft_big_num(dict, result, num);
	ft_num(dict, result, num);
	final_result = ft_strdup(result);
	free(result);
	return (final_result);
}

Dictionary	*load_dictionary(const char *filename)
{
	Dictionary	*dict;
	FILE		*file;
	char		line[256];
	char		*colon;
	char		*text;
	char		*end;
	int			number;
	int			s;

	file = fopen(filename, "r");
	if (!file)
		return (NULL);
	dict = malloc(sizeof(Dictionary));
	if (!dict)
	{
		fclose(file);
		return (NULL);
	}
	dict->entries = NULL;
	dict->size = 0;
	while (fgets(line, sizeof(line), file))
	{
		colon = ft_strchr(line, ':');
		if (!colon)
			continue ;
		*colon = '\0';
		number = ft_atoi(line);
		text = colon + 1;
		while (*text == ' ')
			text++;
		end = text + ft_strlen(text) - 1;
		while (end > text && (*end == ' ' || *end == '\n'))
			end--;
		*(end + 1) = '\0';
		s = sizeof(DictionaryEntry);
		dict->entries = realloc(dict->entries, (dict->size + 1) * s);
		if (!dict->entries)
		{
			free_dictionary(dict);
			fclose(file);
			return (NULL);
		}
		dict->entries[dict->size].number = number;
		dict->entries[dict->size].text = ft_strdup(text);
		if (!dict->entries[dict->size].text)
		{
			free_dictionary(dict);
			fclose(file);
			return (NULL);
		}
		dict->size++;
	}
	fclose(file);
	return (dict);
}

unsigned long long	ft_strtoull(const char *nptr, char **endptr, int base)
{
	unsigned long long	result;
	int	sign;
	int	digit;

	result = 0;
	sign = 1;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
	{
		nptr++;
	}
	if (base == 0)
	{
		if (*nptr == '0')
		{
			base = 8;
			nptr++;
		}
		else if (*nptr == '0' && *(nptr + 1) == 'x')
		{
			base = 16;
			nptr += 2;
		}
		else
			base = 10;
	}
	while ((digit = ft_digit_value(*nptr, base)) != -1)
	{
		result = result * base + digit;
		nptr++;
	}
	if (endptr != NULL)
		*endptr = (char *)nptr;
	return (sign * result);
}

int	ft_digit_value(char c, int base)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'A' && c <= 'F' && base == 16)
		return (c - 'A' + 10);
	else if (c >= 'a' && c <= 'f' && base == 16)
		return (c - 'a' + 10);
	else
		return (-1);
}
