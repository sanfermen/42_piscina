/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:05:45 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/18 09:17:01 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		number1;
	int		number2;
	char	numbers[5];

	number1 = 0;
	while (number1 <= 98)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			numbers[0] = (number1 / 10) + '0';
			numbers[1] = (number1 % 10) + '0';
			numbers[2] = ' ';
			numbers[3] = (number2 / 10) + '0';
			numbers[4] = (number2 % 10) + '0';
			write (1, &numbers, 5);
			if (!(number1 == 98 && number2 == 99))
				write(1, ", ", 2);
			number2++;
		}
		number1++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
