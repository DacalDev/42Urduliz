/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 14:36:04 by danperez          #+#    #+#             */
/*   Updated: 2024/06/15 19:34:42 by danperez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

#include <stdio.h>

int	main(void)
{
	int	arr[] = {2, 3, 5, 1, 4};
	int	len = 5;

	ft_rev_int_tab(arr, len);
	int i = 0;

	while (i < len)
	{
		printf("%d", arr[i]);
		i++;
	}
}

