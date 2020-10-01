#include <stdio.h>

// Programa que acha os dois maiores numeros entre os 10 valores digitados

int main() {

    int contador = 0;
    int numero;
    int maior1 = 0, maior2 = 0;

    while (contador <= 10)
    {
        
        printf("Digite um numero: ");
        scanf("%d", &numero);

       if(maior1 == 0 && maior2 == 0) {
           maior1 = numero;
           maior2 = numero;
       }

       if(maior1 <= numero) {
           maior2 = maior1;
           maior1 = numero;           
       }

        contador++;

    }
    
    printf("Maior1: %d \n Maior2: %d\n", maior1, maior2);

    return 0;
}