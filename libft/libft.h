#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);
void ft_putchar(unsigned char c);
void ft_putnbr(int nbr);
void ft_putstr(char const *s);
void ft_strclr(char *s);
void ft_putendl(char const *s);
void ft_bzero(void *s, size_t  n);
void *ft_memcpy(void *dest, const void *src, size_t n);
#endif
