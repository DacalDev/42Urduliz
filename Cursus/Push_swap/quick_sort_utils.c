/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 10:40:01 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/29 10:40:07 by jdacal-a         ###   ########.fr       */
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

void	restore_stack(t_stack **a, t_stack **b)
{
	while (!is_empty(*b))
		pa(a, b);
}
