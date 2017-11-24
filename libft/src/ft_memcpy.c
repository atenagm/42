/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:51:51 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/23 19:50:12 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char *destination;
    char *source;
    int i;

    i = 0;
    destination = (char *)dest;
    source = (char *)src;
    while (n > 0)
    {
    destination[i] = source[i];
    i++;
    n--;
    }
    return dest;
}
