/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amacarul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 17:23:05 by amacarul          #+#    #+#             */
/*   Updated: 2024/06/24 09:33:51 by amacarul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

long unsigned int	strlen(const char *str)
{
	long unsigned int	count;

	count = 0;
	while (str[count])
		count ++;
	return (count);
}

int	total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	str_elem;

	total_len = 0;
	str_elem = 0;
	while (str_elem < size)
	{
		total_len += strlen(strs[str_elem]);
		str_elem ++;
	}
	total_len += strlen(sep) * (size - 1);
	return (total_len);
}

char	*add_sep(char *dest, char *sep)
{
	int	sep_char_pos;

	sep_char_pos = 0;
	while (sep[sep_char_pos] != '\0')
	{
		*dest = sep[sep_char_pos];
		dest ++;
		sep_char_pos ++;
	}
	return (dest);
}

char	*ft_strcpy(int size, char *dest, char **strs, char *sep)
{
	int	string_pos;
	int	char_pos;

	string_pos = 0;
	while (string_pos < size)
	{
		char_pos = 0;
		while (strs[string_pos][char_pos] != '\0')
		{
			*dest = strs[string_pos][char_pos];
			dest ++;
			char_pos ++;
		}
		if (string_pos < size - 1)
			dest = add_sep(dest, sep);
		string_pos ++;
	}
	*dest = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;

	if (size == 0)
		return ("");
	joined = (char *)malloc((total_len(size, strs, sep) + 1) * sizeof(char));
	if (joined == NULL)
		return (NULL);
	ft_strcpy(size, joined, strs, sep);
	return (joined);
}
/*
int	main()
{
	int my_size = 4;
	char *my_strs[] = {"La", "bar","ba", "coa"};
	char *my_sep = " | ";
	char *my_joined_str = ft_strjoin(my_size, my_strs, my_sep);

	if (my_joined_str)
	{
		write (1, my_joined_str, strlen(my_joined_str));
		free(my_joined_str);
	}
	return (0);
}*/
