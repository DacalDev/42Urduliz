/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:48:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/29 10:18:06 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	init_all(t_stack **a, t_stack **b, int argc, char **argv)
{
	int	*numbers;

	numbers = process_arguments(argc, argv);
	if (!numbers)
		return (0);
	*a = init_stack_a(numbers, argc - 1);
	*b = init_stack();
	free(numbers);
	if (!(*a) || !(*b))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (1);
	if (!init_all(&a, &b, argc, argv))
		return (1);
	print_stack(a, "a");
	quicksort_stack(&a, &b, a->size);
	print_stack(a, "a");
	free_stack(a);
	free_stack(b);
	return (0);
}
