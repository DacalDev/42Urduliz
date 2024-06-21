/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:30:41 by marvin            #+#    #+#             */
/*   Updated: 2024/06/21 23:30:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dictionary.h"

int is_valid_number(const char *str) {
    if (*str == '\0') return 0;
    while (*str) {
        if (*str < '0' || *str > '9') return 0;
        str++;
    }
    return 1;
}

Dictionary *load_dictionary(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return NULL;

    Dictionary *dict = malloc(sizeof(Dictionary));
    dict->entries = NULL;
    dict->size = 0;

    char line[256];
    while (fgets(line, sizeof(line), file)) {
        char *colon = strchr(line, ':');
        if (!colon) continue;

        *colon = '\0';
        int number = atoi(line);
        char *text = colon + 1;
        while (*text == ' ') text++;
        char *end = text + strlen(text) - 1;
        while (end > text && (*end == ' ' || *end == '\n')) end--;
        *(end + 1) = '\0';

        dict->entries = realloc(dict->entries, (dict->size + 1) * sizeof(DictionaryEntry));
        dict->entries[dict->size].number = number;
        dict->entries[dict->size].text = strdup(text);
        dict->size++;
    }

    fclose(file);
    return dict;
}

void free_dictionary(Dictionary *dict) {
    for (int i = 0; i < dict->size; i++) {
        free(dict->entries[i].text);
    }
    free(dict->entries);
    free(dict);
}

char *find_in_dictionary(Dictionary *dict, int number) {
    for (int i = 0; i < dict->size; i++) {
        if (dict->entries[i].number == number) {
            return dict->entries[i].text;
        }
    }
    return NULL;
}

char *convert_number_to_text(Dictionary *dict, const char *number) {
    int num = atoi(number);
    char *result = malloc(256);
    result[0] = '\0';

    if (num == 0) {
        strcat(result, find_in_dictionary(dict, 0));
    } else {
        if (num / 100 > 0) {
            strcat(result, find_in_dictionary(dict, num / 100));
            strcat(result, " hundred ");
            num %= 100;
        }

        if (num > 0) {
            if (num <= 20 || num % 10 == 0) {
                strcat(result, find_in_dictionary(dict, num));
            } else {
                strcat(result, find_in_dictionary(dict, num - num % 10));
                strcat(result, " ");
                strcat(result, find_in_dictionary(dict, num % 10));
            }
        }
    }

    char *final_result = strdup(result);
    free(result);
    return final_result;
}