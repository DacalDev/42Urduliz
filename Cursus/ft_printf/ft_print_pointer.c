/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:38:27 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 10:18:48 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned long long num, int *num_print)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthex(num / 16, num_print);
	*num_print = ft_print_char(hex[num % 16], *num_print);
}

int	ft_print_pointer(void *ptr, int num_print)
{
	unsigned long long	addr;

	if (!ptr)
		return (ft_print_string("(nil)", num_print));
	addr = (unsigned long long)ptr;
	num_print = ft_print_string("0x", num_print);
	ft_puthex(addr, &num_print);
	return (num_print);
}
