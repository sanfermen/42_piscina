/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 08:27:33 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/23 09:03:55 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int prueba[6] = {0,1,2,3,4,5};
	int tam = 6;
	int	j = 0;

	ft_rev_int_tab(prueba, tam);
	while (j < 6)
	{
		printf("%d", prueba[j]);
		j++;
	}
   return (0);
}*/
