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
#include <stdlib.h>
#include <string.h>
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

Dictionary	*load_dictionary(const char *filename)
{
	FILE	*file;
	Dictionary	*dict;
	char	line[256];
	char	*colon;
	int	number;
	char	*text;
	char	*end;

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
		colon = strchr(line, ':');
		if (!colon)
			continue;
		*colon = '\0';
		number = ft_atoi(line);
		text = colon + 1;
		while (*text == ' ')
			text++;
		end = text + ft_strlen(text) - 1;
		while (end > text && (*end == ' ' || *end == '\n'))
			end--;
		*(end + 1) = '\0';
        dict->entries = realloc(dict->entries, (dict->size + 1) * sizeof(DictionaryEntry));
	if (!dict->entries)
	{
		free_dictionary(dict);
		fclose(file);
		return NULL;
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
	return dict;
}

void free_dictionary(Dictionary *dict)
{
    if (dict)
    {
        for (int i = 0; i < dict->size; i++)
        {
            free(dict->entries[i].text);
        }
        free(dict->entries);
        free(dict);
    }
}

char *find_in_dictionary(Dictionary *dict, int number)
{
    for (int i = 0; i < dict->size; i++)
    {
        if (dict->entries[i].number == number)
            return dict->entries[i].text;
    }
    return NULL;
}

char *convert_number_to_text(Dictionary *dict, const char *number)
{
    unsigned long long num;
    unsigned long long billions, millions, thousands;
    char *text;
    char *final_result;
    char *result;

    num = strtoull(number, NULL, 10);
    if (num == 0)
    {
        text = find_in_dictionary(dict, 0);
        if (text)
        {
            return ft_strdup(text);
        }
    }

    result = malloc(2048);
    if (!result)
        return NULL;

    result[0] = '\0';

    if (num >= 1000000000)
    {
        billions = num / 1000000000;
        ft_bill(dict, result, billions);
        num %= 1000000000;
    }

    if (num >= 1000000)
    {
        millions = num / 1000000;
        ft_mill(dict, result, millions);
        num %= 1000000;
    }

    if (num >= 1000)
    {
        thousands = num / 1000;
        ft_thou(dict, result, thousands);
        num %= 1000;
    }

    if (num >= 100)
    {
        text = find_in_dictionary(dict, num / 100);
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
            text = find_in_dictionary(dict, num);
            if (text)
            {
                ft_strcat(result, text);
            }
        }
        else
        {
            text = find_in_dictionary(dict, num - num % 10);
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

    final_result = ft_strdup(result);
    free(result);
    return final_result;
}
