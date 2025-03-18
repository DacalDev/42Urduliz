/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:39:54 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:39:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int num, int num_print)
{
	if (num >= 10)
		num_print = ft_print_unsigned(num / 10, num_print);
	num_print = ft_print_char((num % 10) + '0', num_print);
	return (num_print);
}
