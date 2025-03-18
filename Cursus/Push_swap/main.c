/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:48:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/02/27 19:48:54 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	*numbers;

	if (argc < 2)
	{
		print_error("Debes proporcionar números.");
		return (1);
	}
	numbers = convert_and_validate_args(argc, argv);
	if (!numbers)
	{
		print_error("Un argumento no es un número válido.");
		return (1);
	}
	if (has_duplicates(numbers, argc - 1))
	{
		print_error("Hay números duplicados.");
		free(numbers);
		return (1);
	}
	print_numbers(numbers, argc - 1);
	free(numbers);
	return (0);
}
