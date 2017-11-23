/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:51:51 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/22 21:04:30 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t	i;

    	i = 0;
    	while (i < n)
    	{
    		((char*)dest)[i] = ((char*)src)[i];
    		i++;
    	}
    return (dest);
}
