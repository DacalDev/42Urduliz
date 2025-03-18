/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 23:40:50 by marvin            #+#    #+#             */
/*   Updated: 2024/10/25 17:53:53 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c, int num_print);
int	ft_print_string(char *str, int num_print);
int	ft_print_pointer(void *ptr, int num_print);
int	ft_print_decimal(int num, int num_print);
int	ft_print_unsigned(unsigned int num, int num_print);
int	ft_print_hex(unsigned int num, int num_print, int uppercase);

#endif
