/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:41:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 14:41:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
	// Abre el archivo en modo escritura (crea el archivo si no existe, y lo trunca si existe)
	int	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1) // Verifica si hubo un error al abrir el archivo
	{
		write(2, "Error al abrir el archivo\n", 27); // Escribir error a stderr
		return (1);
	}

	// Escribir un carácter en el archivo usando ft_putchar_fd
	ft_putchar_fd('X', fd);

	// Cierra el archivo
	close(fd);

	return (0);
}
*/
