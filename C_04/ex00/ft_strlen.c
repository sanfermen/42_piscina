/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:59:33 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/30 09:08:08 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (str[nb] != '\0')
	{
		nb++;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	char *fr = "Hola que tal";
	printf("%d", ft_strlen(fr));
	return (0);
}*/
