/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:29:38 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/24 15:08:03 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *source;
    unsigned char ci;
    int i;

    i = 0;
    source = (unsigned char *)s;
    ci = (unsigned char)c;

    while(n > 0)
    {
        n--;
        if (source[i] == ci)
            return source + i;
        i++;
    }
    return (NULL);
}
