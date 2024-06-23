/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02Prueba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanchez <csanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:29:35 by marvin            #+#    #+#             */
/*   Updated: 2024/06/22 18:26:30 by csanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "dictionary.h"

void	error_message(char *message)
{
	write(1, message, ft_strlen(message));
}

void	write_message(char *message)
{
	write(1, message, strlen(message));
}

int	main(int argc, char *argv[])
{
	char		*number_str;
	char		*dict_file;
	char		*result;
	Dictionary	*dict;

	if (argc < 2 || argc > 3)
		return (error_message("Error\n"), 1);
	number_str = argv[argc - 1];
	if (argc == 3)
		dict_file = argv[1];
	else
		dict_file = "numbers.dict";
	if (!is_valid_number (number_str))
		return (error_message("Error\n"), 1);
	dict = load_dictionary(dict_file);
	if (!dict)
		return (error_message("Dict Error\n"), 1);
	result = convert_number_to_text(dict, number_str);
	if (!result)
		return (error_message("Dict Error\n"), 1);
	write_message(result);
	write_message("\n");
	free(result);
	free_dictionary(dict);
	return (0);
}
