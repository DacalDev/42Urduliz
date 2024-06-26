/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_librar_y2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iullibar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 11:01:51 by iullibar          #+#    #+#             */
/*   Updated: 2024/06/23 11:01:55 by iullibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dictionary.h"

void	ft_thou(Dictionary *dict, char *result, unsigned long long thou)
{
	char	thousands_str[20];
	char	*text;

	int_char(thou, thousands_str);
	text = convert_number_to_text(dict, thousands_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " thousand ");
		free(text);
	}
}

void	ft_mill(Dictionary *dict, char *result, unsigned long long mill)
{
	char	mill_str[20];
	char	*text;

	int_char(mill, mill_str);
	text = convert_number_to_text(dict, mill_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " million ");
		free(text);
	}
}

void	ft_bill(Dictionary *dict, char *result, unsigned long long bill)
{
	char	bill_str[20];
	char	*text;

	int_char(bill, bill_str);
	text = convert_number_to_text(dict, bill_str);
	if (text)
	{
		ft_strcat(result, text);
		ft_strcat(result, " billion ");
		free(text);
	}
}

void	ft_num(Dictionary *dict, char *result, unsigned long long num)
{
	char	*text;

	if (num >= 100)
	{
		text = find_in_dictionary(dict, num / 100);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " hundred ");
		}
		num %= 100;
	}
	if (num > 0)
	{
		ft_lit_num(dict, result, num);
	}
}

void	ft_lit_num(Dictionary *dict, char *result, unsigned long long num)
{
	char	*text;

	if (num <= 20 || num % 10 == 0)
	{
		text = find_in_dictionary(dict, num);
		if (text)
		{
			ft_strcat(result, text);
		}
	}
	else
	{
		text = find_in_dictionary(dict, num - num % 10);
		if (text)
		{
			ft_strcat(result, text);
			ft_strcat(result, " ");
		}
		text = find_in_dictionary(dict, num % 10);
		if (text)
		{
			ft_strcat(result, text);
		}
	}
}
