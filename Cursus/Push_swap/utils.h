/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdacal-a <jdacal-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 18:05:57 by jdacal-a          #+#    #+#             */
/*   Updated: 2025/03/26 15:42:11 by jdacal-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

int		is_number(char *str);
int		has_duplicates(int *arr, int size);
void	print_error(void);
int		*convert_and_validate_args(int argc, char **argv);
void	print_numbers(int *numbers, int size);
int		*process_arguments(int argc, char **argv);

#endif
