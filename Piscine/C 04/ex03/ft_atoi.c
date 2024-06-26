/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danperez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 01:26:19 by danperez          #+#    #+#             */
/*   Updated: 2024/06/23 11:52:21 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
	{
		if ((*str >= 9 && *str <= 13) || (*str == 32))
			str++;
		else if (*str == '-' || *str == '+')
		{	
			if (*str == '-')
				result *= -1;
			str++;
		}
		else if (*str >= '0' && *str <= '9')
		{
			result = result * 10 + (*str - '0');
			str++;
		}
		else
			break;
	}
	return (result);
}
 
#include <stdio.h>

int main(void)
{
	char	str[] = " -1234ab567";
	int		result;

	result = ft_atoi(str);
	printf("%d\n", result);
}
