/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:11:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/19 18:11:14 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "ft_printf/ft_printf.h"

void	pa(t_stack *a, t_stack *b)
{
	int	value;

	if (!b || b->size == 0)
		return ;
	value = pop(b);
	push(a, value);
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	int	value;

	if (!a || a->size == 0)
		return ;
	value = pop(a);
	push(b, value);
	ft_printf("pb\n");
}
