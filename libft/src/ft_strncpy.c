/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 21:06:18 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/25 11:30:35 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
    char    *pnt;
    int     i;

    pnt = (char *)src;
    i = 0;
    while(n > 0)
    {
        if (pnt[i] != '\0')
            dest[i] = pnt[i];
        else
            dest[i] = '\0';
        i++;
        n--;
    }
    return (dest);
}
