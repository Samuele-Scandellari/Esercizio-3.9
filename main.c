#include <stdio.h>
int main()
{
    int  urgenza;
    float km=0, peso=0, spedizione=0;
    printf("Inserisci i kilometri da percorrere: ");
    scanf("%f", &km);
    printf("Inserisco il peso del pacco: ");
    scanf("%f", &peso);
    printf("Inserisci '1' se la spedizoine e' urgene o '0' se non lo e': ");
    scanf("%d", &urgenza);
    if(km<100 && urgenza==0) {
        spedizione=(peso*1);
    }
    else if((km>=100 || km<=300) && urgenza==0) {
        spedizione=(peso*2);
    }
    else {
        spedizione=(peso*3);
    }
    if(km<100 && urgenza==1) {
        spedizione=(peso*2.5);
    }
    else if((km>=100 || km<=300) && urgenza==1) {
        spedizione=(peso*3.5);
    }
    else {
        spedizione=(peso*4);
    }
    printf("La tua spedizione costa: %.2f$", spedizione);
}