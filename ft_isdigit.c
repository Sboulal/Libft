/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:06:12 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/10 17:09:11 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int a)
{
	if (a >= 0 && a <= 9)
		return (1);
	return (0);
}
