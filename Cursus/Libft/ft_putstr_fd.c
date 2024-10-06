/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 14:49:08 by marvin            #+#    #+#             */
/*   Updated: 2024/10/06 14:49:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
int	main(void)
{
	// Abre el archivo en modo escritura (crea el archivo si no existe, y lo trunca si existe)
	int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd == -1) // Verifica si hubo un error al abrir el archivo
	{
		write(2, "Error al abrir el archivo\n", 27); // Escribir error a stderr
		return (1);
	}

	// Escribir una cadena en el archivo usando ft_putstr_fd
	ft_putstr_fd("Hola, 42 Urduliz!\n", fd);

	// Cierra el archivo
	close(fd);

	return (0);
}
*/
