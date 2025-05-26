/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:08:26 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/11 15:08:26 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf/ft_printf.h"
# include <stdbool.h>
# include <limits.h>

/* ================== STACK ================== */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*target_node;
	struct s_node	*next;
}	t_node;

/* ================== OPERATIONS ================== */
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	swap_stack(t_node **stack);
void	push_stack(t_node **src, t_node **dest);
void	rotate_stack(t_node **stack);
void	reverse_stack(t_node **stack);

/* ================== EXECUTE_ROTATIONS ================== */
void	execute_rotations(t_node **a, t_node **b, int *cost_a, int *cost_b);

/* ================== MEMORY ================== */
t_node	*create_node(int value);
void	free_list(t_node *head);

/* ================== PARSER ================== */
int		has_duplicates(int *arr, int size);
int		*convert_args(int argc, char **argv);
t_node	*create_stack(int *numbers, int size);
t_node	*parse_args(int argc, char **argv);

/* ================== SORT_UTILS ================== */
int		is_sorted(t_node *stack);
t_node	*find_min_node(t_node *stack);
int		get_position(t_node *stack, t_node *node);
void	safe_rotate(t_node **a);
void	safe_reverse_rotate(t_node **a);

/* ================== STACK_INDEX ================== */
void	assign_indexes(t_node *stack);

/* ================== STACK_UTILS ================== */
void	print_error(char *msg);
int		is_number(char *str);
int		stack_size(t_node *stack);
t_node	*find_last_node(t_node *stack);
void	free_stack(t_node **stack);

/* ================== SORT ================== */
void	sort_five(t_node **a, t_node **b);
void	sort_three(t_node **a);

/* ================== SORT_TURK ================== */
void	turk_sort(t_node **a, t_node **b);
void	insert_best_move(t_node **a, t_node **b);
void	execute_cheapest_move(t_node **a, t_node **b, t_node *best_move);
void	align_stack(t_node **a);

/* ================== TARGETS ================== */
void	assign_targets(t_node *a, t_node *b);

/* ================== TURK_HELPERS ================== */
void	push_all_but_three(t_node **a, t_node **b);

/* ================== TURK_UTILS ================== */
int		get_cost(int size, int pos);
int		calculate_cost(t_node *a, t_node *b, t_node *node_b);
void	rotate_both(t_node **a, t_node **b, int *cost_a, int *cost_b);

#endif
