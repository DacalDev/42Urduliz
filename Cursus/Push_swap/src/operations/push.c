/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:53:08 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/14 10:53:08 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	push_stack(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (!src || !*src)
		return ;
	temp = *src;
	*src = (*src)->next;
	temp->next = *dest;
	*dest = temp;
}

void	pa(t_node **a, t_node **b)
{
	push_stack(b, a);
	ft_printf("pa\n");
}

void	pb(t_node **a, t_node **b)
{
	push_stack(a, b);
	ft_printf("pb\n");
}
