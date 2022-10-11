/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:47:08 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/11 00:23:02 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_memcmp(const void *p ,const void *p2 ,size_t l)
{
    unsigned char *a = p;
    unsigned char *b = p2;
    unsigned int i;
    i = 0;
    while (i < l-1 && a[i] && b[i] && a[i] == b[i])
    {
        i++;
    }
    return (a[i]-b[i] );
}
int main()
{
    char k[] = "salma";
    char r[] = "good";
   // memcmp(k,r,5);
    
    printf("%d",ft_memcmp(k,r,3));
    
}