/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:27:11 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/25 12:39:53 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}
/*
#include <unistd.h>

int	main(void)
{
	char	c;
	char	msg_printable[] = " es un carácter imprimible.\n";
	char	msg_non_printable[] = " no es un carácter imprimible.\n";

	c = '\n';
	write(1, &c, 1);
	if (ft_isprint(c))
	{
		write(1, msg_printable, sizeof(msg_printable) - 1);
	}
	else
	{
		write(1, msg_non_printable, sizeof(msg_non_printable) - 1);
	}
	return (0);
}
*/
