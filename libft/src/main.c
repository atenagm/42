/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/19 16:21:16 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/27 00:46:27 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
int main(void)
{
    char *str = "n\0AAAAAAAAAAAAAAAAA";
	char buff1[20] = "bbbbb";
	char buff2[20] = "bbbbbbbbb";
	size_t max = 5;

	strncat(buff1, str, max);
	ft_strncat(buff2, str, max);
    printf("Final destination string : |%s|\n", buff1);
    printf("Final destination string : |%s|\n", buff2);
   return(0);
}
