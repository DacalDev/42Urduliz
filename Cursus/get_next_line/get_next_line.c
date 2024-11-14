/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:56:07 by marvin            #+#    #+#             */
/*   Updated: 2024/11/13 11:56:43 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif

#define MAX_SAFE_BUFFER 8376793

static unsigned long long	adjust_buffer_size(unsigned long long buffer_size)
{
	if (buffer_size > MAX_SAFE_BUFFER)
		return (1024);
	return (buffer_size);
}

static size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

static char	*extract_line(char **saved)
{
	char	*line;
	char	*newline_pos;
	char	*temp;

	newline_pos = ft_strchr(*saved, '\n');
	if (newline_pos)
	{
		line = (char *)malloc(newline_pos - *saved + 2);
		if (!line)
			return (NULL);
		ft_strlcpy(line, *saved, newline_pos - *saved + 2);
		temp = ft_strdup(newline_pos + 1);
		free(*saved);
		*saved = temp;
	}
	else
	{
		line = ft_strdup(*saved);
		free(*saved);
		*saved = NULL;
	}
	return (line);
}

static int	read_line(int fd, char **saved, int buffer_size)
{
	char	*buffer;
	int		bytes_read;
	char	*temp;

	buffer = (char *)malloc(buffer_size + 1);
	if (!buffer)
		return (-1);
	bytes_read = read(fd, buffer, buffer_size);
	if (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!*saved)
			*saved = ft_strdup("");
		temp = ft_strjoin(*saved, buffer);
		free(*saved);
		*saved = temp;
	}
	free(buffer);
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char	*saved;
	int			bytes_read;
	int			buffer_size;

	buffer_size = adjust_buffer_size(BUFFER_SIZE);
	if (fd < 0 || buffer_size <= 0)
		return (NULL);
	bytes_read = read_line(fd, &saved, buffer_size);
	while (bytes_read > 0 && !ft_strchr(saved, '\n'))
	{
		bytes_read = read_line(fd, &saved, buffer_size);
	}
	if (bytes_read < 0 || (!bytes_read && (!saved || !*saved)))
	{
		free(saved);
		saved = NULL;
		return (NULL);
	}
	return (extract_line(&saved));
}
