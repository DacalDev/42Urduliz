/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:19:33 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/12 10:19:33 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	*copy_values_to_array(t_node *stack, int size)
{
	int		*values;
	int		i;
	t_node	*current;

	values = malloc(sizeof(int) * size);
	if (!values)
		exit(EXIT_FAILURE);
	current = stack;
	i = 0;
	while (current)
	{
		values[i++] = current->value;
		current = current->next;
	}
	return (values);
}

static int	binary_search(int *arr, int size, int target)
{
	int	left;
	int	right;
	int	mid;

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		if (arr[mid] == target)
			return (mid);
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

static void	set_indexes(t_node *stack, int *values, int size)
{
	t_node	*current;

	current = stack;
	while (current)
	{
		current->index = binary_search(values, size, current->value);
		current = current->next;
	}
}

void	assign_indexes(t_node *stack)
{
	int		size;
	int		*values;

	size = stack_size(stack);
	values = copy_values_to_array(stack, size);
	ft_qsort(values, 0, size - 1);
	set_indexes(stack, values, size);
	free(values);
}
