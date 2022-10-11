/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:25:35 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 17:58:17 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

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
int main()
{
	char s[] ="Bonjour tout le monde";
	ft_memset(s+4,'.',5);
	printf("%s",s);
}
