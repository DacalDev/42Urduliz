/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   targets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 10:46:01 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/25 10:46:01 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static t_node	*find_target(t_node *a, t_node *b_node)
{
	t_node	*target;
	t_node	*current;
	int		min_diff;
	int		diff;

	target = NULL;
	min_diff = INT_MAX;
	current = a;
	while (current)
	{
		diff = current->index - b_node->index;
		if (diff > 0 && diff < min_diff)
		{
			min_diff = diff;
			target = current;
		}
		current = current->next;
	}
	if (!target)
		target = find_min_node(a);
	return (target);
}

void	assign_targets(t_node *a, t_node *b)
{
	t_node	*node_b;

	node_b = b;
	while (node_b)
	{
		node_b->target_node = find_target(a, node_b);
		node_b = node_b->next;
	}
}
