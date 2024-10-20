/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:40:25 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:40:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_puthex(unsigned int num, int uppercase, int *num_printed)
{
	char	*hex;

	if (uppercase)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	if (num >= 16)
		ft_puthex(num / 16, uppercase, num_printed);
	*num_printed = ft_print_char(hex[num % 16], *num_printed);
}

int	ft_print_hex(unsigned int num, int num_printed, int uppercase)
{
	ft_puthex(num, uppercase, &num_printed);
	return (num_printed);
}
