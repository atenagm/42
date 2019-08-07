/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 16:52:33 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/28 18:31:44 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char *point;

	point = (char *)malloc(ft_strlen(s1) + 1);
	if (point == NULL)
		return (NULL);
	else
	{
		ft_strcpy(point, s1);
		return (point);
	}
}
