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
#define INTERNAL_READ_SIZE 1024

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
	int		line_len;

	newline_pos = ft_strchr(*saved, '\n');
	if (newline_pos)
	{
		line_len = newline_pos - *saved + 1;
		line = (char *)malloc(line_len + 1);
		if (!line)
			return (NULL);
		ft_strlcpy(line, *saved, line_len + 1);
		temp = ft_strdup(newline_pos + 1);
		free(*saved);
		*saved = temp;
		if (**saved == '\0')
		{
			free(*saved);
			*saved = NULL;
		}
	}
	else
	{
		line = ft_strdup(*saved);
		free(*saved);
		*saved = NULL;
	}
	return (line);
}

static int	read_into_saved(int fd, char **saved)
{
	char	internal_buffer[INTERNAL_READ_SIZE + 1];
	int		bytes_read;
	char	*temp;

	bytes_read = read(fd, internal_buffer, INTERNAL_READ_SIZE);
	if (bytes_read > 0)
	{
		internal_buffer[bytes_read] = '\0';
		if (!*saved)
			*saved = ft_strdup("");
		temp = ft_strjoin(*saved, internal_buffer);
		free(*saved);
		*saved = temp;
	}
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char			*saved;
	int					bytes_read;
	unsigned long long	buffer_size;

	buffer_size = adjust_buffer_size(BUFFER_SIZE);
	if (fd < 0 || buffer_size <= 0)
		return (NULL);
	bytes_read = read_into_saved(fd, &saved);
	while (bytes_read > 0 && !ft_strchr(saved, '\n'))
	{
		bytes_read = read_into_saved(fd, &saved);
	}
	if (bytes_read < 0 || (!bytes_read && (!saved || !*saved)))
	{
		free(saved);
		saved = NULL;
		return (NULL);
	}
	return (extract_line(&saved));
}
