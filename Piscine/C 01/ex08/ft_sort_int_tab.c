/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:44:14 by danperez          #+#    #+#             */
/*   Updated: 2024/06/16 09:27:21 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	int    arr[] = {-1, 0, 7, 33, -5};
	int    size = 5;

	ft_sort_int_tab(arr, size);

	int	i = 0;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}

