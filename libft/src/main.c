/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:21:16 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/25 13:10:12 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int   main(void)
{
    int var1 = 'A';
  int var2 = '2';
  int var3 = '\t';
  int var4 = ' ';

  if( ft_isalpha(var1) ) {
     printf("var1 = |%c| is an alphabet\n", var1 );
  } else {
     printf("var1 = |%c| is not an alphabet\n", var1 );
  }

  if( ft_isalpha(var2) ) {
     printf("var2 = |%c| is an alphabet\n", var2 );
  } else {
     printf("var2 = |%c| is not an alphabet\n", var2 );
  }

  if( ft_isalpha(var3) ) {
     printf("var3 = |%c| is an alphabet\n", var3 );
  } else {
     printf("var3 = |%c| is not an alphabet\n", var3 );
  }

  if( ft_isalpha(var4) ) {
     printf("var4 = |%c| is an alphabet\n", var4 );
  } else {
     printf("var4 = |%c| is not an alphabet\n", var4 );
  }
}
