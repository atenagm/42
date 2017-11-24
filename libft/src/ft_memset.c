/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmiron <vmiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 20:32:30 by vmiron            #+#    #+#             */
/*   Updated: 2017/11/23 17:57:16 by vmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
void *ft_memset(void *s, int c, size_t n)
{
    char *changes; // pointer pentru a modifica *s
    int i; // contor

    i = 0; // init
    changes = s; // atribuierea val
    while(n > 0)
    {
        changes[i] = c; //atribuie valorile pentru s
        i++;
        n--;
    }
    return s; 
}
