/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:29:46 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/14 11:29:46 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sort_five(t_node **a, t_node **b)
{
	while (stack_size(*a) > 3)
		push_all_but_three(a, b);
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	sort_three(t_node **a)
{
	int	first;
	int	second;
	int	third;

	first = (*a)->index;
	second = (*a)->next->index;
	third = (*a)->next->next->index;
	if (first > second && second < third && first < third)
		sa(a);
	else if (first > second && second > third)
	{
		sa(a);
		safe_reverse_rotate(a);
	}
	else if (first > second && second < third && first > third)
		safe_rotate(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		safe_rotate(a);
	}
	else if (first < second && second > third && first > third)
		safe_reverse_rotate(a);
}
