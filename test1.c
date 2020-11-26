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
    int r;

    if(nb < 0)
    {
        my_put_char('-');
        nb = -nb;
    }
    if(nb <= 9)
    {
        my_put_char(nb + 48);
    }
    else
        if(nb > 9)
        {
            my_put_nbr(nb / 10);
            r = nb % 10;
            my_put_char(r + 48);
        }    
    
}

void my_swap(int *a, int *b)
{
    int c = *a;
    int d = *b;
    *a = d;
    *b = c;

}

int my_putstr(char const *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
}

char *my_evil_str(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
    my_put_char('\n');
    --i;
    while(i != -1);
    {
        my_put_char(str[i]);
        --i;
    }
    my_put_char('\n');
}

int my_strlen(char const *str)
{
    int compteur = 0;
    while(str[compteur] != '\0')
    {
        ++compteur;
    }
    my_putstr("Number of characters in the string : ");
    my_put_nbr(compteur);
    my_put_char('\n');
}

int my_getnbr(char const *str)
{
    int i = 0;
    while(str[i] < 48 && str[i] != '\0' || str[i] > 57 && str[i] != '\0')
    {
        ++i;
    }
    if(str[i] == '\0')
    {
        my_put_char('0');
        my_put_char('\n');
        return 0;
    }
    int b = i;
    while(str[b] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
        ++b
    }
    int x = i - 1;
    int y = 0;
    while(str[x] == '-')
    {
        ++y;
        --x;
    }
    if(y % 2 == 1)
    {
        my_put_char('-');
    }
    while(str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
    my_put_char('\n');
}

int main()
{
    // my_print_alpha();
    // my_print_revalpha();
    // my_print_digits();
    // my_isneg(2);
    // my_put_nbr(550); 
    // int c = 59;
    // int d = 12;
    // my_swap(&c, &d);
    // my_put_nbr(c);
    // my_put_char('\n');
    // my_put_nbr(d);
    // my_put_char('\n');
    // my_putstr("Nae Nae Baby\n\0"); 
    // my_strlen("Shot to death in Uganda\0");
    // my_evil_str("Cochonou\0");
    my_getnbr("fezhfzfd----58zfzdfzddfzd");
}