/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:11:10 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/20 15:30:49 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"
#include "ft_printf/ft_printf.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b || b->size == 0)
		return ;
	push(a, pop(b));
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	int	value;
	t_node	*new_node;

	if (!a || a->size == 0)
		return ;
	value = pop(a);
	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		return ;
	new_node->value = value;
	new_node->next = b->top; // El nuevo nodo apunta al antiguo top
	b->top = new_node; // Ahora el nuevo nodo es el top
	b->size++;
	ft_printf("pb\n");
}

