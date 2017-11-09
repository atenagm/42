#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

// void ft_putnbr(int nbr)
// {
//   if (nbr < 0)
//   {
//     ft_putchar('-');
//     nbr = -nbr;
//   }
//   if (nbr > 9)
//   {
//     ft_putnbr(nbr / 10);
//     ft_putnbr(nbr % 10);
//   }
//   else
//     ft_putchar(nbr + '0');
// }
void ft_putnbr(int nbr)
{
  int i,ll;

  ll = nbr;
  int k,o,u = 0,numb[20];
  if (nbr > 9)
  {
    while (nbr>9)
    {
      nbr = nbr /10;
    }
  }
//  if (nbr <= 9 && nbr >= 0)
    ft_putchar(nbr + '0');
    while(ll>9)
    {
      i = ll % 10;
      ll = ll / 10;
    if (i <= 9 && i >= 0)
      o++;
      numb[o] = i;
      u = o;
    }
    while(u != 0)
    {
      ft_putchar(numb[u] + '0');
      u--;
    }
}

int main (void)
{
  ft_putnbr(53210);
  ft_putchar('\n');
  return 0;
}
