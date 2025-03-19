/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:48:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/19 18:12:05 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "stack.h"
#include "operations.h"
#include "libft/libft.h"
#include "ft_printf/ft_printf.h"

void	initialize_stacks(t_stack **a, t_stack **b, int *numbers, int size)
{
	*a = init_stack_a(numbers, size);
	if (!(*a))
		return ;
	*b = init_stack();
}

void	execute_operations(t_stack *a, t_stack *b)
{
	pb(a, b);
	pb(a, b);
	print_stack(a, "a después de pb");
	print_stack(b, "b después de pb");
	pa(a, b);
	print_stack(a, "a después de pa");
	print_stack(b, "b después de pa");
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
	print_stack(b, "b");
	execute_operations(a, b);
	free_stack(a);
	free_stack(b);
	return (0);
}
