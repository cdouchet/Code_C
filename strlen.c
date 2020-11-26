#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_strlen(char *str)
{
    int compteur = 0;
        while(str[compteur] != '\0')
        {
            ++compteur;
        }
    return compteur;

    // Compter le nombre de caractère dans la string "str" et les renvoyer
    // Indice 1: une string se termine par un '\0'
    // Indice 2: rechercher comment utiliser while

}
int my_putchar(char lettre)
{
    write(0, &lettre, 1);
    return 0;
}

int my_put_str(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        my_putchar(str[i]);
        ++i;
    }
}

int main()
{
    char str[8] = "Chaton\n\0";
    my_put_str("L'abeille coule\n\0");
}