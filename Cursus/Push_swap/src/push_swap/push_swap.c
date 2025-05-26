/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 23:04:03 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/05/11 23:04:03 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;
	int		size;

	if (argc < 2)
		return (0);
	a = parse_args(argc, argv);
	assign_indexes(a);
	if (is_sorted(a))
	{
		free_stack(&a);
		return (0);
	}
	b = NULL;
	size = stack_size(a);
	if (size <= 3)
		sort_three(&a);
	else if (size <= 5)
		sort_five(&a, &b);
	else
		turk_sort(&a, &b);
	free_stack(&a);
	return (0);
}
