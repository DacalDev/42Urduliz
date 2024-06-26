/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:05:19 by amacarul          #+#    #+#             */
/*   Updated: 2024/06/24 09:32:49 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*insert_int_array(int *array, int min, int max)
{
	int	i;

	i = 0;
	while (min < max)
	{
		array[i] = min;
		min ++;
		i ++;
	}
	return (array);
}

int	*ft_range(int min, int max)
{
	int	*array;

	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	insert_int_array(array, min, max);
	return (array);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = ft_range(min, max);
	if (*range == NULL)
		return (-1);
	return (max - min);
}
/*
int	main()
{
	int min = 5;
	int max = 10;
	int *range;
	int size;

	size = ft_ultimate_range(&range, min, max);
	printf("%d", size);
	return (0);
}*/
