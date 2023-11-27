/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:55:56 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/01 10:49:02 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
/*
#include <stdio.h>
int	main(void)
{
	int	numb = 0;
	printf("%d", ft_iterative_factorial(numb));
	return (0);
}
*/
