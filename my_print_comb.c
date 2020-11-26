#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>

int my_put_char(int j)
{
    write(0, &j, 1);
}

int digits_print(int a, int b, int c)
{
    my_put_char(a);
    my_put_char(b);
    my_put_char(c);
}

int virgule_print(int x, int y)
{
    my_put_char(x);
    my_put_char(y);
}
int my_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';

        while(a <= '7')
        {

            b = a + 1;

                while(b <= '8')
                    {

                        c = b + 1;

                            while(c <= '9')
                            {
                                digits_print(a, b, c);
                                if(a != '7')
                                    virgule_print(',', ' ');
                                c = c + 1;
                            }
                        b = b + 1;

                    }
            a = a + 1;
        }
    return 0;

}



int main()
{
    my_print_comb();
}