/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:21:16 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/03 14:35:14 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>
int main(void)
{

  char str[5] = "libft";
  char dest[5] = "casre";

  ft_strlcat(dest,str,3);
  printf("%s",dest);

  return (0);
}
