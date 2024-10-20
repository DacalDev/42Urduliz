/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:36:09 by marvin            #+#    #+#             */
/*   Updated: 2024/10/19 23:36:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(char *str, int num_printed)
{
	while (*str)
	{
		num_printed = ft_print_char(*str, num_printed);
		str++;
	}
	return (num_printed);
}
