/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:04:14 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/28 18:10:07 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destin;
	char		*source;

	destin = (char *)dest;
	source = (char *)src;
	if (source < destin)
	{
		while (n > 0)
		{
			n--;
			destin[n] = source[n];
		}
	}
	else
		ft_memcpy(destin, source, n);
	return (destin);
}
