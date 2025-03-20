/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:16:55 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/20 15:17:04 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"
#include "ft_printf/ft_printf.h"

// Imprime el stack
void	print_stack(t_stack *stack, char *name)
{
	t_node	*current;

	ft_printf("Stack %s:\n", name);
	current = stack->top;
	while (current)
	{
		ft_printf("%d\n", current->value);
		current = current->next;
	}
}
