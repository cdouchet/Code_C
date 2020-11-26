#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_char(int x)
{
    write(0, &x, 1);
}

int result(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
    my_put_char('\n');
}

int function(int *a)
{
    int r;
    r = *a % 10;

    if(r == 0 || r == 2 || r == 4 || r == 6 || r == 8)
    {
        result("L'entier est pair\0");
    }
    else
    {
        result("L'entier est impair\0");
    }
    my_put_char('\n');
}

int main()
{
    int j = 879;
    function(&j);
}