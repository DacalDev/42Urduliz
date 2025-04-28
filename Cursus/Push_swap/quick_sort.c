/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:52:48 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/28 12:08:31 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pivot(t_stack *stack)
{
	int	*values;
	int	size;
	int	pivot;

	size = stack_size(stack);
	values = malloc(sizeof(int) * size);
	if (!values)
		return (-1);
	stack_to_array(stack, values);
	ft_qsort(values, 0, size - 1);
	pivot = values[size / 2];
	free(values);
	return (pivot);
}

void	push_greater_to_b(t_stack *a, t_stack *b, int pivot, int size)
{
	int	count;
	int	rotations;

	count = 0;
	rotations = 0;
	while (count < size)
	{
		if (a->top && a->top->value > pivot)
			pb(&b, &a);
		else
		{
			ra(a);
			rotations++;
		}
		count++;
	}
	while (rotations > 0)
	{
		rra(a);
		rotations--;
	}
}

void	restore_stack(t_stack *a, t_stack *b)
{
	while (!is_empty(b))
		pa(&a, &b);
}

void	partition_stack(t_stack *a, t_stack *b, int pivot, int size)
{
	push_greater_to_b(a, b, pivot, size);
	restore_stack(a, b);
}

void	quicksort_stack(t_stack **a, t_stack **b, int size)
{
	int	pivot;

	if (size <= 1)
		return ;
	pivot = get_pivot(*a);
	partition_stack(*a, *b, pivot, size);
	quicksort_stack(a, b, size / 2);
	quicksort_stack(a, b, size - (size / 2));
}
