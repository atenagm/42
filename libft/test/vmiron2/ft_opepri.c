/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opepri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/13 16:02:23 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/13 16:10:25 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_opepri(char c)
{
	if (c == '(' || c == ')')
		return (0);
	if (c == '*' || c == '/' || c == '%')
		return (1);
	if (c == '+' || c == '-')
		return (2);
	return (0);
}