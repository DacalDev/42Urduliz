/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 22:44:46 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/11 22:44:46 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

int	*convert_args(int argc, char **argv)
{
	int	*numbers;
	int	i;

	numbers = (int *)malloc(sizeof(int) * (argc - 1));
	if (!numbers)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		if (!is_number(argv[i + 1]))
		{
			free(numbers);
			return (NULL);
		}
		numbers[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	if (has_duplicates(numbers, argc - 1))
	{
		free(numbers);
		return (NULL);
	}
	return (numbers);
}

t_node	*create_stack(int *numbers, int size)
{
	t_node	*head;
	t_node	*new_node;
	int		i;

	head = NULL;
	i = size - 1;
	while (i >= 0)
	{
		new_node = (t_node *)malloc(sizeof(t_node));
		if (!new_node)
			return (NULL);
		new_node->value = numbers[i];
		new_node->next = head;
		head = new_node;
		i--;
	}
	return (head);
}

t_node	*parse_args(int argc, char **argv)
{
	int		*numbers;
	t_node	*stack_a;

	numbers = convert_args(argc, argv);
	if (!numbers)
	{
		ft_printf("Error\n");
		return (NULL);
	}
	stack_a = create_stack(numbers, argc - 1);
	free(numbers);
	return (stack_a);
}
