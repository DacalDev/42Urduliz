/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 12:30:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/25 12:30:10 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static bool	is_one_of_three_min(t_node *node, int min1, int min2, int min3)
{
	return (node->index == min1 || node->index == min2 || node->index == min3);
}

static void	find_three_min_indexes(t_node *stack,
	int *min1, int *min2, int *min3)
{
	t_node	*tmp;

	tmp = stack;
	*min1 = INT_MAX;
	*min2 = INT_MAX;
	*min3 = INT_MAX;
	while (tmp)
	{
		if (tmp->index < *min1)
		{
			*min3 = *min2;
			*min2 = *min1;
			*min1 = tmp->index;
		}
		else if (tmp->index < *min2)
		{
			*min3 = *min2;
			*min2 = tmp->index;
		}
		else if (tmp->index < *min3)
			*min3 = tmp->index;
		tmp = tmp->next;
	}
}

void	push_all_but_three(t_node **a, t_node **b)
{
	int		min1;
	int		min2;
	int		min3;

	find_three_min_indexes(*a, &min1, &min2, &min3);
	while (stack_size(*a) > 3)
	{
		if (!is_one_of_three_min(*a, min1, min2, min3))
			pb(a, b);
		else
			ra(a);
	}
}
