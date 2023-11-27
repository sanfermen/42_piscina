/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:44:08 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/01 11:19:02 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int num = 4;
	printf("%d", ft_recursive_factorial(num));
	return (0);
}
*/		
