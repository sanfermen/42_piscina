/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:51:13 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/31 08:51:33 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	temp;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb != -2147483648)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	if (nb != -2147483648)
	{
		temp = nb % 10 + '0';
		write(1, &temp, 1);
	}
}
/*
int	main(void)
{
	int	number = -2147483648;
	ft_putnbr(number);
	return (0);
}*/
