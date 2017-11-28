/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:32:30 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/28 18:13:10 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*changes;
	int		i;

	i = 0;
	changes = s;
	while (n > 0)
	{
		changes[i] = c;
		i++;
		n--;
	}
	return (s);
}
