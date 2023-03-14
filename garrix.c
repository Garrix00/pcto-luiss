//SCRIVERE UN PROGRAMMA CHE CHIEDA ALL'UTENTE DI INSERIRE
//UN INT E STAMPARE A SCHERMO IL VALORE

#include <stdio.h>

int main()
{
    int età;
    char sesso;

    printf("quanti anni hai? ");
    scanf("%d", &età);
    printf("hai %d anni\n", età);
    if(età > 50) printf("allora sei un vecchio di merda\n");
    printf("sei uomo o donna?");
    scanf(" %c", &sesso);
    printf("hai %d anni e sei %c\n", età, sesso);



}