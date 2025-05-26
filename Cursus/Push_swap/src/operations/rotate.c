/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:52:55 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/14 10:52:55 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate_stack(t_node **stack)
{
	t_node	*first;
	t_node	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	*stack = first->next;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_node **a)
{
	rotate_stack(a);
	ft_printf("ra\n");
}

void	rb(t_node **b)
{
	rotate_stack(b);
	ft_printf("rb\n");
}

void	rr(t_node **a, t_node **b)
{
	rotate_stack(a);
	rotate_stack(b);
	ft_printf("rr\n");
}
