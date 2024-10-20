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

int	ft_print_decimal(int num, int num_printed)
{
	if (num == -2147483648)
		return (ft_print_string("-2147483648", num_printed));
	if (num < 0)
	{
		num_printed = ft_print_char('-', num_printed);
		num = -num;
	}
	if (num >= 10)
		num_printed = ft_print_decimal(num / 10, num_printed);
	num_printed = ft_print_char((num % 10) + '0', num_printed);
	return (num_printed);
}
