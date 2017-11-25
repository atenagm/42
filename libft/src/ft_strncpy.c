/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 21:06:18 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/25 12:12:37 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;

    i = 0;

    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
