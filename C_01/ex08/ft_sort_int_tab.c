/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sandrfer <sandrfer@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:27:33 by sandrfer          #+#    #+#             */
/*   Updated: 2023/11/16 09:03:55 by sandrfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size)
{
    int swap;
    int i;
    int j;
    
    i = 0;
    while (i < (size - 1))
    {
        j = 0;
        while (j < (size - i - 1))
        {
            if (tab[j] > tab[j + 1])
            {
                swap = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = swap;
            }
            j++;
        }
        i++;
    }
}
/*
#include <stdio.h>
int main(void)
{
    int prueba[7] = {25,6,2,3,8,24,20};
    int i = 0;
    ft_sort_int_tab(prueba, 7);
    while(i < 7)
    {
        printf("%d,", prueba[i]);
        i++;
    }
}*/