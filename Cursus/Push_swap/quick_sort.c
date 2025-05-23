/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:52:48 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/29 10:39:31 by jdacal-a         ###   ########.fr       */
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

void	push_or_rotate(t_stack **a, t_stack **b, int pivot, int *rotations)
{
	if ((*a)->top && (*a)->top->value > pivot)
		pb(b, a);
	else
	{
		ra(*a);
		(*rotations)++;
	}
}

void	partition_stack(t_stack **a, t_stack **b, int pivot, int size)
{
	int	i;
	int	rotations;

	i = 0;
	rotations = 0;
	while (i < size)
	{
		push_or_rotate(a, b, pivot, &rotations);
		i++;
	}
	while (rotations-- > 0)
		rra(*a);
}

void	restore_stack(t_stack **a, t_stack **b)
{
	while (!is_empty(*b))
		pa(a, b);
}

void	quicksort_stack(t_stack **a, t_stack **b, int size)
{
	int	pivot;

	if (size <= 1)
		return ;
	pivot = get_pivot(*a);
	partition_stack(a, b, pivot, size);
	restore_stack(a, b);
	quicksort_stack(a, b, size / 2);
	quicksort_stack(a, b, size - (size / 2));
}
