/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 20:54:51 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/26 21:26:14 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strcat(char *dest, const char *src)
{
    int l;
    int i;

    l = 0;
    i = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[l] !='\0')
    {
        dest[i] = src[l];
        l++;
        i++;
    }
    dest[i] = '\0';
    return (dest);

}
