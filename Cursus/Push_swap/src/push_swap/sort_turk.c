/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_turk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 10:47:02 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/13 10:47:02 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	turk_sort(t_node **a, t_node **b)
{
	int	size;

	size = stack_size(*a);
	if (size <= 3)
		sort_three(a);
	else if (size <= 5)
		sort_five(a, b);
	else
	{
		push_all_but_three(a, b);
		sort_three(a);
		while (stack_size(*b) > 0)
		{
			assign_targets(*a, *b);
			insert_best_move(a, b);
		}
	}
	align_stack(a);
}

void	insert_best_move(t_node **a, t_node **b)
{
	t_node	*best_move;
	t_node	*temp;
	int		min_cost;
	int		cost;

	best_move = *b;
	min_cost = INT_MAX;
	temp = *b;
	while (temp)
	{
		cost = calculate_cost(*a, *b, temp);
		if (cost < min_cost)
		{
			min_cost = cost;
			best_move = temp;
		}
		temp = temp->next;
	}
	execute_cheapest_move(a, b, best_move);
}

void	execute_cheapest_move(t_node **a, t_node **b, t_node *best_move)
{
	int	cost_a;
	int	cost_b;

	cost_a = get_cost(get_position(*a, best_move->target_node), stack_size(*a));
	cost_b = get_cost(get_position(*b, best_move), stack_size(*b));
	execute_rotations(a, b, &cost_a, &cost_b);
	pa(a, b);
}

void	align_stack(t_node **a)
{
	t_node	*min_node;
	int		pos_min;

	min_node = find_min_node(*a);
	pos_min = get_position(*a, min_node);
	if (pos_min > stack_size(*a) / 2)
	{
		while (*a != min_node)
			safe_reverse_rotate(a);
	}
	else
	{
		while (*a != min_node)
			safe_rotate(a);
	}
}
