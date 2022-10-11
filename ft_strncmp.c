/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 00:31:30 by saboulal          #+#    #+#             */
/*   Updated: 2022/10/11 00:34:25 by saboulal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp (const char * f, const char *s ,size_t len)
{
    unsigned int i;
    i= 0;
    while ( f[i] && s[i] && f[i] == s[i] && i < len - 1)
    {
        i++;
    }
    return (f[i] - s[i]);
}