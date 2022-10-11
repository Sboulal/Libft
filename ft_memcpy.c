/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 20:15:00 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 20:29:47 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
void *ft_memcpy( void *dst ,void * src,size_t n)
{
    unsigned char * s = dst;
    unsigned char * a = src;
    unsigned int i;
    i =0;
    while ( i < n )
    {
        s[i]= a[i];
        i++;
    }
    s[i] ='\0';
    return (s);
}
int main()
{
    char w[]="bonjour";
    char s[]="salma";
   char l = sizeof(char) *6;
    ft_memcpy(w,s,l);
    //memcpy(w,s,l);
    printf("%s",w);
}
