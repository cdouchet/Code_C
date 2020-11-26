#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_char(int x)
{
    write(0, &x, 1);
}

int bonjour(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
    my_put_char('\n');
}

int main()
{
    bonjour("bonjour");
}