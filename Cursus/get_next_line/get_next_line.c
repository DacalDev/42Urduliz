/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_n3ext_line.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:56:07 by marvin            #+#    #+#             */
/*   Updated: 2024/11/08 19:56:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*extract_line(char **saved)
{
	char	*line;
	char	*newline_pos;
	char	*temp;

	newline_pos = ft_strchr(*saved, '\n');
	if (newline_pos)
	{
		line = ft_strjoin(NULL, *saved);
		if (!line)
			return (NULL);
		line[newline_pos - *saved + 1] = '\0';
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

static int	read_line(int fd, char **saved)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;
	char	*temp;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		if (!*saved)
			*saved = ft_strdup("");
		temp = ft_strjoin(*saved, buffer);
		free(*saved);
		*saved = temp;
	}
	return (bytes_read);
}

char	*get_next_line(int fd)
{
	static char	*saved;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = read_line(fd, &saved);
	while (bytes_read > 0 && !ft_strchr(saved, '\n'))
	{
		bytes_read = read_line(fd, &saved);
	}
	if (bytes_read < 0 || (!bytes_read && (!saved || !*saved)))
	{
		free(saved);
		saved = NULL;
		return (NULL);
	}
	return (extract_line(&saved));
}
