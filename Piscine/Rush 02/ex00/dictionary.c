/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:30:41 by marvin            #+#    #+#             */
/*   Updated: 2024/06/22 09:31:33 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include "dictionary.h"

void	int_char(unsigned long long value, char *dest, int base)
{
	char	temp[20];
	char	*point;

	point = temp + 19;
	*point = '\0';
	while (value > 0)
	{
		*--point = (value % base) + '0';
		value /= base;
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

Dictionary	*load_dictionary(const char *filename)
{
	FILE		*file;
	Dictionary	*dict;
	char		line[256];

	file = fopen(filename, "r");
	if (!file)
		return (NULL);
	dict = malloc(sizeof(Dictionary));
	if (!dict)
		return (NULL);
	dict->entries = NULL;
	dict->size = 0;
	while (fgets(line, sizeof(line), file))
	{
		char	*colon;
		colon = strchr(line, ':');
		if (!colon)
			continue ;
		*colon = '\0';
		int	number;
		number = ft_atoi(line);
		char	*text;
		text = colon + 1;
		while (*text == ' ')
			text++;
		char	*end;
		end = text + ft_strlen(text) - 1;
		while (end > text && (*end == ' ' || *end == '\n'))
			end--;
		*(end + 1) = '\0';
		dict->entries = realloc(dict->entries, (dict->size + 1) * sizeof(DictionaryEntry));
		if (!dict->entries)
		{
			free_dictionary(dict);
			return (NULL);
		}
		dict->entries[dict->size].number = number;
		dict->entries[dict->size].text = ft_strdup(text);
		if (!dict->entries[dict->size].text)
		{
			free_dictionary(dict);
			return (NULL);
		}
		dict->size++;
	}
	fclose(file);
	return (dict);
}

char	*convert_number_to_text(Dictionary *dict, const char *number)
{
	unsigned long long	num;

	num = strtoull(number, NULL, 10);
	if (num == 0)
	{
		char	*text = find_in_dictionary(dict, 0);
		if (text)
		{
			return (ft_strdup(text));
		}
	}
	char	*result = malloc(2048);
	if (!result)
		return (NULL);
	result[0] = '\0';
	if (num >= 1000000000)
	{
		unsigned long long	billions = num / 1000000000;
		char	billions_str[20];
		int_char(billions, billions_str, 10);
		char	*text = convert_number_to_text(dict, billions_str);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " billion ");
			free(text);
		}
		num %= 1000000000;
	}
	if (num >= 1000000)
	{
		unsigned long long	millions = num / 1000000;
		char	millions_str[20];
		int_char(millions, millions_str, 10);
		char	*text = convert_number_to_text(dict, millions_str);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " million ");
			free(text);
		}
		num %= 1000000;
	}
	if (num >= 1000)
	{
		unsigned long long	thousands = num / 1000;
		char	thousands_str[20];
		int_char(thousands, thousands_str, 10);
		char	*text = convert_number_to_text(dict, thousands_str);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " thousand ");
			free(text);
		}
		num %= 1000;
	}
	if (num >= 100)
	{
		char	*text = find_in_dictionary(dict, num / 100);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " hundred ");
		}
		num %= 100;
	}
	if (num > 0)
	{
		if (num <= 20 || num % 10 == 0)
		{
			char	*text = find_in_dictionary(dict, num);
			if (text)
			{
				ft_strcat(result, text);
			}
		}
		else
		{
			char	*text = find_in_dictionary(dict, num - num % 10);
			if (text)
			{
				ft_strcat(result, text);
				ft_strcat(result, " ");
			}
			text = find_in_dictionary(dict, num % 10);
			if (text)
			{
				ft_strcat(result, text);
			}
		}
	}
	char	*final_result = ft_strdup(result);
	free(result);
	return (final_result);
}
