/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   702-day.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:10:39 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/01/18 12:20:16 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	float	meters;
	float	kilometers;
	float	centimeters;

	printf("Introdue los metros que deseas convertir:\n");
	scanf("%f", &meters);
	kilometers = meters / 1000;
	centimeters = meters * 100;
	printf("%.2f metros son equivalentes a %.3f kilometros y %.2f centimetros\n",
		meters, kilometers, centimeters);
	return (0);
}
