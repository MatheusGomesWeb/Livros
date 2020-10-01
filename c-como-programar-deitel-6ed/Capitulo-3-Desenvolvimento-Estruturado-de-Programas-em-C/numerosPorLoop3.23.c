#include <stdio.h>

    // Programa que imprime os numeros de 1 a 10 lado a lado na mesma linha, separado por 3 espaços

int main () {

    int numeroMax = 10, contador = 0;

    while(contador <= numeroMax) {       

        printf("%d\t\t\t", contador);

        contador++;

    }

    return 0;
}