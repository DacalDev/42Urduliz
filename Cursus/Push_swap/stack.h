/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:08:09 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 16:27:09 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;// Apunta al primer elemento del stack
	int		size;// Cantidad de elementos en el stack
}	t_stack;

// Funciones para manejar los stacks
t_stack	*init_stack(void);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
void	free_stack(t_stack *stack);
void	print_stack(t_stack *stack, char *name);
t_stack	*init_stack_a(int *numbers, int size);
int		stack_size(t_stack *stack);
void	stack_to_array(t_stack *stack, int *array);
void	pb(t_stack **b, t_stack **a);
void	ra(t_stack **a);
int		is_empty(t_stack *stack);
void	pa(t_stack **a, t_stack **b);

#endif
