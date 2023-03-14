#include <stdio.h>

int main()
{
    char sesso;
    printf("sei maschio o femmina? ");
    scanf(" %c", &sesso);
    if (sesso == 'm')
    {
        printf("sei maschio\n");
    }
    else if (sesso == 'f')
    {
        printf("sei femmina\n");
    }
    else
    {
        printf("sei uno scemo\n");
    }
}