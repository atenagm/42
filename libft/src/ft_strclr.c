#include "../libft.h"

void ft_strclr(char *s)
{
    while (s != NULL)
    *s++ = '\0';
}
