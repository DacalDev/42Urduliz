/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:42:05 by jdacal-a          #+#    #+#             */
/*   Updated: 2024/09/25 12:53:58 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
#include <unistd.h>

int	main(void)
{
	int		i;
	int		size;
	char	test_chars[] = {'A', 'z', '1', '\n', 128, -1};
	char	msg_ascii[] = " es un carácter ASCII.\n";
	char	msg_non_ascii[] = " no es un carácter ASCII.\n";

	i = 0;
	size = sizeof(test_chars) / sizeof(test_chars[0]);
	while (i < size)
	{
		write(1, &test_chars[i], 1);
		if (ft_isascii(test_chars[i]))
		{
			write(1, msg_ascii, sizeof(msg_ascii) - 1);
		}
		else
		{
			write(1, msg_non_ascii, sizeof(msg_non_ascii) - 1);
		}
		i++;
	}
	return (0);
}
*/
