/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 17:58:04 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/28 18:04:56 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

/* ================== STACK ================== */
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	int		size;
}	t_stack;

t_stack	*init_stack(void);
void	push(t_stack *stack, int value);
int		pop(t_stack *stack);
void	free_stack(t_stack *stack);
void	print_stack(t_stack *stack, char *name);
t_stack	*init_stack_a(int *numbers, int size);
int		stack_size(t_stack *stack);
void	stack_to_array(t_stack *stack, int *array);
int		is_empty(t_stack *stack);

/* ================== OPERATIONS ================== */
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

/* ================== QUICK SORT ================== */
int		get_pivot(t_stack *stack);
void	partition_stack(t_stack *a, t_stack *b, int pivot);
void	quicksort_stack(t_stack **a, t_stack **b, int size);

/* ================== UTILS ================== */
int		is_number(char *str);
int		has_duplicates(int *arr, int size);
void	print_error(void);
int		*convert_and_validate_args(int argc, char **argv);
void	print_numbers(int *numbers, int size);
int		*process_arguments(int argc, char **argv);

#endif
