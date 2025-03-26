/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:11:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 16:46:25 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "ft_printf/ft_printf.h"

void	pa(t_stack **a, t_stack **b)
{
	if (!b || !(*b) || (*b)->size == 0)
		return ;
	push(a, pop(b));
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	if (!a || !(*a) || (*a)->size == 0)
		return ;
	push(b, pop(a));
	ft_printf("pb\n");
}
