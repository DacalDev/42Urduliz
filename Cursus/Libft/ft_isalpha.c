/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:47:12 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/25 12:03:54 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
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
	char	msg_letra[] = " es una letra.\n";
	char	msg_no_letra[] = " no es una letra.\n";

	c = '&';
	write(1, &c, 1);
	if (ft_isalpha(c))
	{
		write(1, msg_letra, sizeof(msg_letra) - 1);
	}
	else
	{
		write(1, msg_no_letra, sizeof(msg_no_letra) - 1);
	}
	return (0);
}
*/
