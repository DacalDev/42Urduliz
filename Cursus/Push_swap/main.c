/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:48:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 16:35:53 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "stack.h"
#include "operations.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include "quick_sort.h"

void	initialize_stacks(t_stack **a, t_stack **b, int *numbers, int size)
{
	*a = init_stack_a(numbers, size);
	if (!(*a))
		return ;
	*b = init_stack();
}

void	execute_operations(t_stack *a, t_stack *b)
{
	pb(&a, &b);
	print_stack(a, "a");
	print_stack(b, "b");
	pa(&a, &b);
	print_stack(a, "a");
	print_stack(b, "b");
	ra(&a);
	print_stack(a, "a");
	print_stack(b, "b");
	rb(b);
	print_stack(a, "a");
	print_stack(b, "b");
	rr(a, b);
	print_stack(a, "a");
	print_stack(b, "b");
	rra(a);
	print_stack(a, "a");
	print_stack(b, "b");
	rrb(b);
	print_stack(a, "a");
	print_stack(b, "b");
	rrr(a, b);
	print_stack(a, "a");
	print_stack(b, "b");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*numbers;

	numbers = process_arguments(argc, argv);
	if (!numbers)
		return (1);
	initialize_stacks(&a, &b, numbers, argc - 1);
	free(numbers);
	if (!a || !b)
		return (1);
	print_stack(a, "a");
	quicksort_stack(&a, &b, a->size);
	print_stack(a, "a");
	free_stack(a);
	free_stack(b);
	return (0);
}
