/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:53:18 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/14 10:53:18 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	reverse_stack(t_node **stack)
{
	t_node	*prev;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	rra(t_node **a)
{
	reverse_stack(a);
	ft_printf("rra\n");
}

void	rrb(t_node **b)
{
	reverse_stack(b);
	ft_printf("rrb\n");
}

void	rrr(t_node **a, t_node **b)
{
	reverse_stack(a);
	reverse_stack(b);
	ft_printf("rrr\n");
}
