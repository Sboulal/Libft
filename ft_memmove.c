/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 22:40:16 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 22:55:08 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
void *ft_memmove(void *dest ,const void *src ,size_t len)
{
    unsigned char *a = dest;
    const char *b= src;
    unsigned int i;
    i = 0;
    while (i < len)
    {
        a [i] = b[i];
        i++;
    }
    a[i] = '\0';
    return (dest);
}
int main()
{
    char m[]="";
    char k[]="say something";
  
   // memmove(m,k,8);
   ft_memmove(m,k,13);
    printf("%s",m);
}
