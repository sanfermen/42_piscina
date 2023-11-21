/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:19:22 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/25 17:17:59 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (origin);
}
/*
#include <stdio.h>
int	main(void)
{
	char chain[] = "JAJAJA";
	ft_strlowcase(chain);
	printf("%s", chain);
	return (0);
}*/
