/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 11:20:23 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/01 12:36:21 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int num = 0;
	int pot = 6;
	printf("%d", ft_iterative_power(num, pot));
	return (0);
}*/
