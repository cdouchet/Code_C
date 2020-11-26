#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_char(char c)
{ 
    write(0, &c, 1);
}

int phrase(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
}

int print_res(int x)
{
    int r;

    if(x <= 9)
        my_put_char(x + 48);
    if(x > 9)
    {
        print_res(x / 10);
        r = x % 10;
        my_put_char(r + 48);
    }
}

int my_compute_factorial_it(int nb)
{
    int res = 1;
    int i = 1;

    if(nb < 0)
        return 0;
    if(nb == 0)
        return 1;
    else
    {
        while(i != nb)
        {
            ++i;
            res = res * i;
        }
        print_res(res);
    }
}

int my_compute_power_it(int nb, int p)
{
    if(p < 0)
        return 0;
    if(p == 0)
        return 1;
    while(p > 1)
    {
        nb = nb * nb;
        --p;
    }
    print_res(nb);
}

int my_compute_power_rec(int nb, int p)
{
    if(p < 0)
        return 0;
    if(p == 0)
        return 1;
    if(p > 1)
    {
        nb = nb * nb;
        my_compute_power_rec(nb, p - 1);
    }
    if(p == 1)
        print_res(nb);
}

int my_compute_square_root(int nb)
{
    int i = 1;
    int res = 0;
    while(res < nb)
    {    
        res = i * i;
        if(res == nb)
        {
            print_res(i);
            return(res);
        }
        else if(res > nb)
        {
            phrase("la racine carrée n'est pas un nombre entier");
            return 0;
        }
        else
            ++i;
    }    

}

int my_is_prime(int nb)
{
    int r2 = nb % 2;
    int r3 = nb % 3;
    int r5 = nb % 5;
    int r7 = nb % 7;

    if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
        return 1;
    if (r2 == 0 || r3 == 0 || r5 == 0 || r7 == 0)
        return 0;
    else
        return 1;
}

int my_find_prime_sup(int nb)
{
    int a = my_is_prime(nb);

    if (a == 0)
    {
        ++nb;
        my_find_prime_sup(nb);
    }
    else
    {
        phrase("\nLe nombre premier le plus proche est : ");
        print_res(nb);
        return(nb);
    }
}

int test()
{
    return 5;
}

int main()
{
//     my_compute_factorial_it(8);
//     my_put_char('\n');
//     my_compute_power_it(5, 3);
//     my_put_char('\n');
//     my_compute_power_rec(5, 3);
//     my_put_char('\n');
//     my_compute_square_root(9);
//     my_put_char('\n');
    my_is_prime(89);
    my_put_char('\n');
    my_find_prime_sup(84);
    my_put_char('\n');
}