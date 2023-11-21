/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:31:32 by sandrfer          #+#    #+#             */
/*   Updated: 2023/10/24 11:16:53 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*ptr_dest;

	ptr_dest = dest;
	while (n > 0)
	{
		if (*src != '\0')
		{
			*dest = *src;
			src++;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		n--;
	}
	return (ptr_dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	orig[5] = "Hello";
	char	copy[5] = "World";
	int		d = 3;
	int		j = 0;

	ft_strncpy(copy, orig, d);
	while (j < 3)
	{
		printf("%c", copy[j]);
		j++;
	}
	return (0);
}*/
