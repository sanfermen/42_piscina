/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:19:50 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/01 15:37:40 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;

	i = 0;
	while (i * i < nb)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	if (i * i > nb)
		return (0);
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	int num = 144;
	printf("%d", ft_sqrt(num));
	return (0);
}*/
