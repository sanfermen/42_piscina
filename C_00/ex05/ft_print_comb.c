/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:26:43 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/17 15:39:45 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	 ft_print_comb(void)
{
	char number[3];

	number[0] = '0';
	while (number[0] <= '7')
	{
		number[1] = number[0]+1;
		while (number[1] <= '8')
		{
			number[2] = number[1]+1;
			while (number[2] <= '9')
			{
				write(1, &number, 3);
				if (number[0] != '7')	
						write(1, ", ", 2);
					number[2]++;
			}
			number[1]++;
		}
		number[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
