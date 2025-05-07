/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:56:40 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/29 09:57:42 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size <= 1 || is_sorted(*a))
		return ;
	quicksort_stack(a, b, size);
}
