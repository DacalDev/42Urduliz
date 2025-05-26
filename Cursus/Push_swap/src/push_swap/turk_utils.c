/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:45:30 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/13 12:45:30 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	get_cost(int size, int pos)
{
	if (pos <= size / 2)
		return (pos);
	return (size - pos);
}

int	calculate_cost(t_node *a, t_node *b, t_node *node_b)
{
	int	pos_a;
	int	pos_b;
	int	cost_a;
	int	cost_b;

	pos_a = get_position(a, node_b->target_node);
	pos_b = get_position(b, node_b);
	cost_a = get_cost(stack_size(a), pos_a);
	cost_b = get_cost(stack_size(b), pos_b);
	return (cost_a + cost_b);
}

void	rotate_both(t_node **a, t_node **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rr(a, b);
		(*cost_a)--;
		(*cost_b)--;
	}
}
