/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:01:45 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 17:03:42 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *str)
{
   unsigned	int i;
   i =0 ;
   while (str[i])
   {
	   i++;
   }
   return (i);


}
