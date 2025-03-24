/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:52:48 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/24 17:29:16 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "quick_sort.h"

int get_pivot(t_stack *stack)
{
	int *values;
	t_node *current;
	int size, i, pivot;

	size = stack->size;
	values = (int *)malloc(sizeof(int) * size);
	if (!values)
		return (0);
	current = stack->top;
	i = 0;
	while (current)
	{
		values[i++] = current->value;
		current = current->next;
	}
	ft_qsort(values, size); // Implementa un quicksort simple aquí
	pivot = values[size / 2]; // Mediana
	free(values);
	return (pivot);
}

static void push_greater_to_b(t_stack *a, t_stack *b, int pivot, int *left_size, int *pushed)
{
	if (a->top->value < pivot)
	{
		pb(b, a);
		(*pushed)++;
	}
	else
	{
		ra(a);
		(*left_size)++;
	}
}

static void restore_stack(t_stack *a, t_stack *b, int pushed)
{
	while (pushed > 0)
	{
		pa(a, b);
		pushed--;
	}
}

int partition_stack(t_stack *a, t_stack *b, int pivot)
{
	int left_size;
	int original_size;
	int pushed;

	left_size = 0;
	pushed = 0;
	original_size = a->size;
	while (original_size > 0)
	{
		push_greater_to_b(a, b, pivot, &left_size, &pushed);
		original_size--;
	}
	restore_stack(a, b, pushed);
	return (left_size);
}

void quicksort_stack(t_stack *a, t_stack *b, int size)
{
	if (size <= 1)
		return ;
	int pivot = get_pivot(a);
	int left_size = partition_stack(a, b, pivot); // Devuelve el tamaño de la parte izquierda
	// Ordenar la parte izquierda
	quicksort_stack(a, b, left_size);
	// Ordenar la parte derecha (moviendo elementos de B a A y aplicando QuickSort)
	int right_size = size - left_size;
	while (right_size-- > 0)
		pa(a, b);
	quicksort_stack(a, b, size - left_size);
}
