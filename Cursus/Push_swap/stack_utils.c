/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 15:16:55 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/04/29 11:49:47 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Imprime el stack
void	print_stack(t_stack *stack, char *name)
{
	t_node	*current;

	ft_printf("Stack %s:\n", name);
	current = stack->top;
	while (current)
	{
		ft_printf("%d\n", current->value);
		current = current->next;
	}
}
void	ft_insertion_sort(int arr[], int n)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		i++;
	}
}
