/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 10:24:00 by amacarul          #+#    #+#             */
/*   Updated: 2024/06/24 09:30:08 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

	if (min >= max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	insert_int_array(array, min, max);
	return (array);
}
/*
int	main()
{
	int min = 0;
	int max = 100;
	int *array;
	int i;

	array = ft_range(min, max);
	i = 0;
	while ( i < (max - min))
	{
		printf("%d ", array[i]);
		i ++;
	}
	free(array);
	return 0;
}*/
