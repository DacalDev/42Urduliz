/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 15:55:37 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 15:55:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_number(int n, int fd)
{
	char	buffer[11];
	int		i;

	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write(fd, &buffer[--i], 1);
}
/*
#include <stdio.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else
	{
		if (n < 0)
			n = -n;
		write_number(n, fd);
	}
}

int	main(void)
{
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd < 0)
	{
		perror("Error opening file");
		return (1);
	}

	ft_putnbr_fd(42, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	ft_putnbr_fd(0, fd);
	write(fd, "\n", 1);

	close(fd);
	return (0);
}
*/
