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

int	ft_print_unsigned(unsigned int num, int num_printed)
{
	if (num >= 10)
		num_printed = ft_print_unsigned(num / 10, num_printed);
	num_printed = ft_print_char((num % 10) + '0', num_printed);
	return (num_printed);
}
