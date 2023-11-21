/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:52:44 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/25 17:18:27 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (origin);
}
/*
#include <stdio.h>
int	main(void)
{
	char chain[] = "jajajaj";
	ft_strupcase(chain);
	printf("%s", chain);
	return (0);
}*/
