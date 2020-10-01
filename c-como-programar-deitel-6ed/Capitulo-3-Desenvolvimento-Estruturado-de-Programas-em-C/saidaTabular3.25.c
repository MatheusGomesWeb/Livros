#include <stdio.h>

    // Programa que usa looping para imprimir uma tabela de valores com tabulação

int main () {

    int contador = 1;

    printf("N\t10*N\t100*N\t1000*N\n");

    while(contador <= 10) {

        printf("%d\t%d\t%d\t%d\n", contador, contador * 10, contador * 100, contador * 1000);

        contador++;

    }

    return 0;
}