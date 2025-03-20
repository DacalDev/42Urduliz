/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:48:54 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/20 16:13:25 by jdacal-a         ###   ########.fr       */
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
	// Realizando algunas operaciones de prueba
	pb(a, b);// Push a -> b
	pb(a, b);// Push a -> b
	print_stack(a, "a después de pb");
	print_stack(b, "b después de pb");
	// Probando operaciones de rotación
	ra(a);// Rotate a
	rb(b);// Rotate b
	rr(a, b);// Rotate ambos
	// Probando operaciones de rotación inversa
	rra(a);// Reverse rotate a
	rrb(b);// Reverse rotate b
	rrr(a, b);// Reverse rotate ambos
	pa(a, b);// Push b -> a
	print_stack(a, "a después de pa");
	print_stack(b, "b después de pa");
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*numbers;

	// Procesamiento de los argumentos
	numbers = process_arguments(argc, argv);
	if (!numbers)
		return (1);
	// Inicialización de los stacks
	initialize_stacks(&a, &b, numbers, argc - 1);
	free(numbers);
	if (!a || !b)
		return (1);
	// Imprimir el estado inicial de los stacks
	print_stack(a, "a");
	print_stack(b, "b");
	// Ejecutar operaciones (incluyendo las de rotación)
	execute_operations(a, b);
	// Liberar la memoria de los stacks
	free_stack(a);
	free_stack(b);
	return (0);
}

