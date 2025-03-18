/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:27:01 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:27:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	handle_format(char specifier, va_list args, int *num_print)
{
	if (specifier == 'c')
		*num_print = ft_print_char(va_arg(args, int), *num_print);
	else if (specifier == 's')
		*num_print = ft_print_string(va_arg(args, char *), *num_print);
	else if (specifier == 'p')
		*num_print = ft_print_pointer(va_arg(args, void *), *num_print);
	else if (specifier == 'd' || specifier == 'i')
		*num_print = ft_print_decimal(va_arg(args, int), *num_print);
	else if (specifier == 'u')
		*num_print = ft_print_unsigned(va_arg(args, unsigned int), *num_print);
	else if (specifier == 'x')
		*num_print = ft_print_hex(va_arg(args, unsigned int), *num_print, 0);
	else if (specifier == 'X')
		*num_print = ft_print_hex(va_arg(args, unsigned int), *num_print, 1);
	else if (specifier == '%')
		*num_print = ft_print_char('%', *num_print);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		num_print;
	int		i;

	num_print = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			handle_format(format[i], args, &num_print);
		}
		else
		{
			num_print = ft_print_char(format[i], num_print);
		}
		i++;
	}
	va_end(args);
	return (num_print);
}
