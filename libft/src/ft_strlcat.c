/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 18:52:44 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/28 19:03:23 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
  int n;
  n = 0;
  while(src[n] != '\0')
    n++;
  ft_strncat(dst,src,size);

  return (0);
}
