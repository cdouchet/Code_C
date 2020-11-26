#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_put_char(char c)
{
    write(0, &c, 1);
}

int print_str(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        my_put_char(str[i]);
        ++i;
    }
}

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        ++i;
    }

    dest[i] = '\0';

    print_str(dest);

}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0')
        ++i;
    if (n > i)
    {
        i = 0;
        while (src[i] != '\0')
        {
            dest[i] = src[i];
            ++i;
        }
    }
    else
    {
        dest[n] = '\0';
        i = 0;
        while (n > i)
        {
            dest[i] = src[i];
            ++i;
        }
    }
    print_str(dest);
    my_put_char('\n');
}

char *my_revstr(char *str)
{
    int i = 0;
    int r = 0;

    while (str[i] != '\0')
        ++i;
    char rts[i];
    rts[i] = '\0';
    --i;

    while (i >= 0)
    {
        rts[r] = str[i];
        --i;
        ++r;
    }
    i = 0;

    while (str[i] != '\0')
    {
        str[i] = rts[i];
        ++i;
    }
    print_str(str);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (str[i] != to_find[0] && str[i] != '\0')
        ++i;
    if (str[i] == '\0')
        return 0;
    else {
        while ()
    }
}

int main()
{
    // int n;
    // char dest[n];
    // my_strcpy(&dest[n], "Chocapic");
    // my_put_char('\n');
    // int i;
    // char dest[i];
    // my_strncpy(&dest[i], "Chocapic", 5);
    // my_revstr("Chocapic");
    my_strstr("Caloupard", "zoup");
}