/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:38:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:38:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned long long num, int *num_printed)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthex(num / 16, num_printed);
	*num_printed = ft_print_char(hex[num % 16], *num_printed);
}

int	ft_print_pointer(void *ptr, int num_printed)
{
	unsigned long long	addr;

	addr = (unsigned long long)ptr;
	num_printed = ft_print_string("0x", num_printed);
	ft_puthex(addr, &num_printed);
	return (num_printed);
}
