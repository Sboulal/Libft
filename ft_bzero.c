/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:22:37 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 18:46:59 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void *ft_memset(void *p,int c, size_t len)
{
	unsigned char *s= p ;
	unsigned int i;
	i= 0;
	while (i < len)
	{
		s[i] =c ;
		i++;
	}
	return (p);
}
void ft_bzero( void *s , size_t n)
{

     ft_memset(s,0,n);
}
int main ()
{
	char s[] ="Bonjour tout le monde";
	ft_bzero(s+10,4);

	printf("%s",s);
}
