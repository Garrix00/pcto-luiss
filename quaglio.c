#include <stdio.h>

int main()
{
    char sesso;
    printf("sei maschio, femmina o non binanario? ");
    scanf(" %c", &sesso);
    if (sesso == 'm')
    {
        printf("sei maschio\n");
    }
    else if (sesso == 'f')
    {
        printf("torna a lavare i piatti\n");
    }
    else if (sesso == 'n')
    {
        printf("sei uno scemo\n");
    }
    else
    {
        printf("scemo riscrivi\n");
    }
}