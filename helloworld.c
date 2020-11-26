#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
int my_putchar(char lettre)
{
    write(0, &lettre, 1);
    return 0;
}
int my_strlen(char *str)
{
    
}
int main()
{
    
    my_putchar('G');
    my_putchar('\n');
    return 0;
}
