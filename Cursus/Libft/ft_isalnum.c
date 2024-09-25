/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:04:20 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/25 12:23:15 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <unistd.h>

int main(void)
{
	char	c;
	char	msg_alnum[] = " es un carácter alfanumérico.\n";
	char	msg_no_alnum[] = " no es un carácter alfanumérico.\n";

	c = '&';
	write(1, &c, 1);
	if (ft_isalnum(c))
	{
		write(1, msg_alnum, sizeof(msg_alnum) - 1);
	}
	else
	{
		write(1, msg_no_alnum, sizeof(msg_no_alnum) - 1);
	}
	return (0);
}
*/
