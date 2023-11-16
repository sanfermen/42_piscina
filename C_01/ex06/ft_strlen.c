/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:07:59 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/20 12:42:33 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (*str != '\0')
	{
		n++;
		str++;
	}
	return (n);
}
/*
#include <stdio.h>

int	main()
{
	char	frase[ ] = "hola que tal";
	int		total;
	
	total = ft_strlen(frase);
	printf("n es %d\n", total);
	return (0);
}
*/
