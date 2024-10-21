/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:39:30 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:39:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int num, int num_print)
{
	if (num == -2147483648)
		return (ft_print_string("-2147483648", num_print));
	if (num < 0)
	{
		num_print = ft_print_char('-', num_print);
		num = -num;
	}
	if (num >= 10)
		num_print = ft_print_decimal(num / 10, num_print);
	num_print = ft_print_char((num % 10) + '0', num_print);
	return (num_print);
}
