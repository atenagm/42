/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:34:39 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/23 20:19:26 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    unsigned char *destin;
    unsigned char *source;
    unsigned char ci;
    size_t i;

    i = 0;
    destin = (unsigned char *)dest;
    source = (unsigned char *)src;
    ci = (unsigned char)c;

    while(i < n)
    {
        destin[i] = source[i];
        if(destin[i] == ci)
            return destin+i+1;
        i++;
    }
    return (NULL);
}
