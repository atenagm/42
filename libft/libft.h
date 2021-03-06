#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);
void ft_putchar(unsigned char c);
void ft_bzero(void *s, size_t  n);
void ft_putnbr(int nbr);
void ft_putstr(char const *s);
void ft_strclr(char *s);
void ft_putendl(char const *s);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *s);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char *dest, const char *src, size_t n);
int ft_isalpha(int c);
char *ft_strdup(const char *s);
char *ft_strcat(char *dest, const char *src);
char *ft_strncat(char *dest, const char *src, size_t n);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
#endif
