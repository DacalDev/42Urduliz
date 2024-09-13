/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 22:18:06 by marvin            #+#    #+#             */
/*   Updated: 2024/09/13 18:01:46 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}
/*
int	main(void)
{
	int	n;

	n = 4;
	ft_is_negative(n);
	write(1, "\n", 1);
	n = -3;
	ft_is_negative(n);
	write(1, "\n", 1);
	n = 0;
	ft_is_negative(n);
	write(1, "\n", 1);
	return (0);
}
*/