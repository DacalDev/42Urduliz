/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 18:06:27 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 16:29:49 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "stack.h"

// Swap
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

// Push
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

// Rotate
void	ra(t_stack **a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

// Reverse Rotate
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

#endif
