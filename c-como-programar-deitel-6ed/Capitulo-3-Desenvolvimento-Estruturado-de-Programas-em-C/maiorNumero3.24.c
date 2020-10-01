#include <stdio.h>

    // Programa que lê uma serie de 10 numeros e imprime o maior deles

int main () {

    int contador = 0;
    int numero, maior;

    while(contador < 10) {
        printf("Digite um numero: \n");
        scanf("%d", &numero);

        if(numero > maior) {
            maior = numero;
        }
        
        contador++;
    }

    printf("Maior numero: %d\n", maior);

    return 0;
}