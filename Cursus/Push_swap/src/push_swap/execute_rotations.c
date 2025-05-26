/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_rotations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 11:17:19 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/25 11:17:19 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	single_rotation(t_node **stack,
	int *cost, void (*rotate)(t_node **))
{
	while (*cost > 0)
	{
		rotate(stack);
		(*cost)--;
	}
	while (*cost < 0)
	{
		reverse_stack(stack);
		(*cost)++;
	}
}

static void	both_rotations(t_node **a, t_node **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		rr(a, b);
		(*cost_a)--;
		(*cost_b)--;
	}
	while (*cost_a < 0 && *cost_b < 0)
	{
		rrr(a, b);
		(*cost_a)++;
		(*cost_b)++;
	}
}

void	execute_rotations(t_node **a, t_node **b, int *cost_a, int *cost_b)
{
	both_rotations(a, b, cost_a, cost_b);
	single_rotation(a, cost_a, ra);
	single_rotation(b, cost_b, rb);
}
