#include<stdio.h>
#include"potenze.h"

int main (void){
    char operazione;
    int risultato, valore;

    printf("[Q]uadrato\n");
    printf("[C]ubo\n");

    scanf("%c", &operazione);

    printf("inserisci un valore\n");
    scanf("%d", &valore);

    switch (operazione){
        case 'q':
            risultato = quadrato(valore);
            printf("%d*%d=%d\n", valore, valore, risultato);
            break;
    
        case 'c':
            risultato = cubo (valore);
            printf("%d*%d*%d=%d\n", valore, valore, valore, risultato);
            break;
        default:
            printf("operazione non compresa\n");
    }
    
    return 0;
}