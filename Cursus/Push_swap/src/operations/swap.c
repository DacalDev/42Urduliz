/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:53:32 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/14 10:53:32 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	swap_stack(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = (*stack)->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	sa(t_node **a)
{
	swap_stack(a);
	ft_printf("sa\n");
}

void	sb(t_node **b)
{
	swap_stack(b);
	ft_printf("sb\n");
}

void	ss(t_node **a, t_node **b)
{
	swap_stack(a);
	swap_stack(b);
	ft_printf("ss\n");
}
