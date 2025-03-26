/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:08:07 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 15:58:51 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUICK_SORT_H
# define QUICK_SORT_H

# include "stack.h"

int		get_pivot(t_stack *stack);
void	partition_stack(t_stack *a, t_stack *b, int pivot);
void	quicksort_stack(t_stack **a, t_stack **b, int size);

#endif
