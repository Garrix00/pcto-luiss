#include <stdio.h>

int main()
{
    int l1;
    int l2;
    int l3;

printf("inserisci la misura di tre lati: \n ");
scanf("%d %d %d", &l1, &l2, &l3);
if(l1 + l2 > l3&&l1 + l3 > l2&&l2 + l3 > l1)
{
    printf("i tre lati formano un triangolo\n");
    if( l1 == l2&&l2 == l3&&l3 == l1)
    {
        printf("il triangolo è equilatero\n");
    }
    else if(l1 == l2||l2 == l3||l3 == l1)
    {
        printf("il triangolo è isoscele\n");
    }
    else
    {
        printf("il triangolo è scaleno");}
        

}
else
{
    printf("i tre lati non formano un triangolo\n");
}

}