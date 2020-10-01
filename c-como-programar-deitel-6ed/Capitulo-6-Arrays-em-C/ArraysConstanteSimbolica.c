#include <stdio.h>

#define SIZE 10
// Arrays com tamanhos pré definidos por constante simbólica (#define).
// #define - é uma diretiva do pré - processador, o pré processador substitui o valor definido pelo texto substituto.

int main () {

    int s[SIZE];
    int j;

    for(j = 0; j < SIZE; j++) {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Elemento", "Valor");


    for(j = 0; j < SIZE; j++) {
        printf("%7d%13d\n", j, s[j]);
    }

    return 0;
}