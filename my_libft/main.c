/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 13:38:51 by vmiron            #+#    #+#             */
/*   Updated: 2017/12/09 16:52:11 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	main(void)
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);

    char stri[50];

   strcpy(stri,"This is string.h library function");
   puts(stri);

   ft_memset(stri,'$',7);
   puts(stri);
	return (0);
}