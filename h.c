#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

int my_put_char(char c)
{
    write(0, &c, 1);
}

int my_print_alpha(void)
{
    int i = 97;
    while(i <= 122)
    {
       my_put_char(i); 
       ++i;
    }
    my_put_char('\n');
}

int my_print_revalpha(void)
{
    int l = 122;
    while(l >= 97)
    {
        my_put_char(l);
        --l;
    }
    my_put_char('\n');
}

int my_print_digits(void)
{
    int i = 48;
    while(i <= 57)
    {
       my_put_char(i); 
       ++i;
    }
    my_put_char('\n');
}

int my_isneg(int n)
{
    if (n < 0)
        my_put_char('N');
    else
        my_put_char('P');

    my_put_char('\n');
}

int my_put_nbr(int nb)
{
  int   n;
 
  n = 0;
  if (nb < 0)
    {
      my_put_char('-');
      nb = -nb;
    }
  if (nb < 10)
    {
      my_put_char(nb + '0');
    }
  else if (nb > 9)
    {
      my_put_nbr(nb / 10);
      n = nb % 10;
      my_put_char(n + '0');
    }
}

int main()
{
    my_print_alpha();
    my_print_revalpha();
    my_print_digits();
    my_isneg(2);
    my_put_nbr(55056789);
}