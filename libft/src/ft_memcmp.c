/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:16:07 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/24 17:57:49 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *source1;
    unsigned char *source2;
    size_t i;

    i = 0;
    source1 = (unsigned char *)s1;
    source2 = (unsigned char *)s2;
    while (i < n)
    {
        if (source1[i] != source2[i])
            return source1[i] - source2[i];
        i++;
    }
    return 0;
}
