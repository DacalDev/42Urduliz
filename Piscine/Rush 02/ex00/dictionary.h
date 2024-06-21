/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:30:17 by marvin            #+#    #+#             */
/*   Updated: 2024/06/21 23:30:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct {
    int number;
    char *text;
} DictionaryEntry;

typedef struct {
    DictionaryEntry *entries;
    int size;
} Dictionary;

Dictionary *load_dictionary(const char *filename);
void free_dictionary(Dictionary *dict);
int is_valid_number(const char *str);
char *convert_number_to_text(Dictionary *dict, const char *number);

#endif