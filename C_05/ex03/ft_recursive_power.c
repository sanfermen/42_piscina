/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:32:46 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/02 12:47:32 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int num = 0;
	int pot = 0;
	printf("%d", ft_recursive_power(num, pot));
	return (0);
}*/
