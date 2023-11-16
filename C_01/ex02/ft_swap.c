/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:39:54 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/19 17:42:53 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main()
{
	int num1 = 25;
	int num2 = 4;
	printf("Antes de ejecutar num1 es %d y num2 es %d\n", num1, num2);
	ft_swap(&num1, &num2);
	printf("Despues de ejecutar num1 es %d y num2 es %d\n", num1, num2);

	return 0;
}
*/
