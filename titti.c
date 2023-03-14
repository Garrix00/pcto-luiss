#include <stdio.h>

int main()
{
    int n1;
    int n2;
    int n3;

printf("inserisci tre numeri: \n ");
scanf("%d %d %d", &n1, &n2, &n3);
if(n1-n2==n2-n3)
{
    printf("i numeri sono in progressione aritmetica\n");
}
else
{
    printf("i numeri non sono in progressione aritmetica\n");
}
}