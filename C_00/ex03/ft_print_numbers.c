/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 13:07:18 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/17 09:05:57 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	first_number;
	char	last_number;

	first_number = 48;
	last_number = 57;
	while (first_number <= last_number)
	{
		write (1, &first_number, 1);
		first_number++;
	}
}
