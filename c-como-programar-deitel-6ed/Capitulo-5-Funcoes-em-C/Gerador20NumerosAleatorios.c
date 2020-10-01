#include <stdio.h>
#include <stdlib.h>

// Programa que gera 20 numeros aleatórios

int main(void) {

    int i;

    for(i = 0; i < 20; i++) {

        printf("%20d", 1 + ( rand() % 6) );

        if(i % 5 == 0) {
            printf("\n");
        }

    }

    return 0;
}