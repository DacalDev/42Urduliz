/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 23:30:17 by marvin            #+#    #+#             */
/*   Updated: 2024/06/22 10:22:39 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef	struct
{
	int	number;
	char	*text;
}
DictionaryEntry;

typedef	struct
{
	DictionaryEntry	*entries;
	int	size;
}
Dictionary;

int	is_valid_number(const char *str);
Dictionary	*load_dictionary(const char *filename);
void	free_dictionary(Dictionary *dict);
char	*find_in_dictionary(Dictionary *dict, int number);
char	*convert_number_to_text(Dictionary *dict, const char *number);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strcat(char *dest, char *src);
char	*ft_strdup(const char *s);

#endif
