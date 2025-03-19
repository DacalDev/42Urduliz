/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:04:56 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/19 18:23:14 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>

int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_error(char *message)
{
	ft_printf("Error: %s\n", message);
}

int	*convert_and_validate_args(int argc, char **argv)
{
	int	*numbers;
	int	i;

	i = 1;
	numbers = (int *)malloc(sizeof(int) * (argc - 1));
	if (!numbers)
		return (NULL);
	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			free(numbers);
			return (NULL);
		}
		numbers[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (numbers);
}

int	*process_arguments(int argc, char **argv)
{
	int	*numbers;

	if (argc < 2)
	{
		print_error("Debes proporcionar números.");
		return (NULL);
	}
	numbers = convert_and_validate_args(argc, argv);
	if (!numbers)
	{
		print_error("Un argumento no es un número válido.");
		return (NULL);
	}
	if (has_duplicates(numbers, argc - 1))
	{
		print_error("Hay números duplicados.");
		free(numbers);
		return (NULL);
	}
	return (numbers);
}
