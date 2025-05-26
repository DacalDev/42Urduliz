/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:46:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/12 10:46:54 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	is_sorted(t_node *stack)
{
	while (stack && stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_node	*find_min_node(t_node *stack)
{
	t_node	*min;

	if (!stack)
		return (NULL);
	min = stack;
	stack = stack->next;
	while (stack)
	{
		if (stack->index < min->index)
			min = stack;
		stack = stack->next;
	}
	return (min);
}

int	get_position(t_node *stack, t_node *node)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack == node)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

void	safe_rotate(t_node **a)
{
	if (!is_sorted(*a))
		ra(a);
}

void	safe_reverse_rotate(t_node **a)
{
	if (!is_sorted(*a))
		rra(a);
}
