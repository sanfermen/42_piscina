/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:56:48 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/19 17:45:32 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}
/*
#include <stdio.h>

int	main()
{
	int	num1 = 16;
	int num2 = 5;
	printf("Antes de ejecutar num1 es %d y num2 es %d\n", num1, num2);
	ft_ultimate_div_mod(&num1, &num2);
	printf("Despues de ejecutar num1 es %d y num2 es %d\n", num1, num2);
}
*/
