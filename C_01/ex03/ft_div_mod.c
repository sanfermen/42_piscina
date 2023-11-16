/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:48:28 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/19 16:19:32 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int cociente;
	int	resto;
	ft_div_mod(16, 5, &cociente, &resto);
	printf("El cociente es %d y el modulo es %d\n", cociente, resto);
	return 0;
}
*/
