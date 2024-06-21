/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:29:35 by marvin            #+#    #+#             */
/*   Updated: 2024/06/21 23:29:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "dictionary.h"

void error_message(const char *message) {
    write(1, message, strlen(message));
}

int main(int argc, char *argv[]) {
    if (argc < 2 || argc > 3) {
        error_message("Error\n");
        return 1;
    }

    char *number_str = argv[argc - 1];
    char *dict_file = (argc == 3) ? argv[1] : "numbers.dict";

    if (!is_valid_number(number_str)) {
        error_message("Error\n");
        return 1;
    }

    Dictionary *dict = load_dictionary(dict_file);
    if (dict == NULL) {
        error_message("Dict Error\n");
        return 1;
    }

    char *result = convert_number_to_text(dict, number_str);
    if (result == NULL) {
        error_message("Dict Error\n");
    } else {
        printf("%s\n", result);
        free(result);
    }

    free_dictionary(dict);
    return 0;
}