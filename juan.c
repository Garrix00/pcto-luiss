#include <stdio.h>

int main()

{
    int età;

    printf("quanti anni hai? ");
    scanf("%d", &età);
    printf("hai %d anni\n", età);
    if (età < 18)
    {
        printf("sei minorenne\n");
    }
    else if (età == 18)
    {
        printf("sei appena diventato maggiorenne\n");
    }
    else
    {
        printf("sei maggiorenne\n");
    }

}