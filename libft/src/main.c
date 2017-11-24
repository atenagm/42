/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:21:16 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/23 20:12:50 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int   main(void)
{
  char src[40] = "1234567890s234567890";
  char dest[100];
  char *ll;
  ll = dest;

   ft_memccpy(dest, src, 's', 20);
  // ll = ll + 1;
  int len;
  int len2;
  len = strlen(dest);
  len2 = strlen(src);

  printf("Final Dest : %s\n", dest);
  printf("Final SRC : %s\n", src);
  printf("Final Dest : %d\n", len);
  printf("Final SRC : %d\n", len2);
  return(0);
}
