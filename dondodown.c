#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    int media;
    x=0;
    y=0;
    z=0;
    while(x>=0)
    {
    printf("scegli un numero\n");
    scanf("%d", &x);
     y = y + 1;
     z = z + x;
    media = z / y;
    printf("la media è %d\n", media);
    }


}