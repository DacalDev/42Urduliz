/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:53:34 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/25 12:04:10 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
#include <unistd.h>

int	main(void)
{
	char	c;
	char	msg_digit[] = " es un digito.\n";
	char	msg_no_digit[] = " no es un digito.\n";

	c = 'p';
	write(1, &c, 1);
	if (ft_isdigit(c))
	{
		write(1, msg_digit, sizeof(msg_digit) - 1);
	}
	else
	{
		write(1, msg_no_digit, sizeof(msg_no_digit) - 1);
	}
	return (0);
}
*/
