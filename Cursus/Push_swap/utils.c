/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:04:56 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/28 18:06:59 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	print_error(void)
{
	ft_printf("Error\n");
	exit(1);
}

int	*convert_and_validate_args(int argc, char **argv)
{
	int		*numbers;
	int		i;
	long	num;

	numbers = (int *)malloc(sizeof(int) * (argc - 1));
	if (!numbers)
		return (NULL);
	i = 1;
	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			free(numbers);
			print_error();
		}
		num = ft_atol(argv[i]);
		if (num < -2147483648 || num > 2147483647)
		{
			free(numbers);
			print_error();
		}
		numbers[i - 1] = (int)num;
		i++;
	}
	return (numbers);
}

int	*process_arguments(int argc, char **argv)
{
	int	*numbers;

	if (argc < 2)
	{
		print_error();
		return (NULL);
	}
	numbers = convert_and_validate_args(argc, argv);
	if (!numbers)
	{
		print_error();
		return (NULL);
	}
	if (has_duplicates(numbers, argc - 1))
	{
		print_error();
		free(numbers);
		return (NULL);
	}
	return (numbers);
}
