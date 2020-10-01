#include <stdio.h>

// Programa que usa um loop para produzir uma tabela de valores

int main () {

    int contador = 1;

    printf("A\tA+2\tA+4\tA+6\n");

    while(contador < 6) {

    printf("%d\t%d\t%d\t%d\t\n", contador * 3, (contador * 3) + 2, (contador * 3) + 4, (contador * 3) + 6);

    contador++;

    }

    return 0;
}