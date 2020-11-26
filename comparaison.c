#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_char(int x)
{
    write(0, &x, 1);
}

int phrase(char *str)
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
    int a, b;
    
    phrase("Saisir l'entier a : ");
    scanf("%d", &a);
    phrase("Saisir l'entier b : ");
    scanf("%d", &b);

    if(a == b)
    {
        phrase("a = b");
    }
    else
    {
        if(a < b)
        {
            phrase("a < b");
        }
        else
        {
            phrase("a > b");
        }
    }
}