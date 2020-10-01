#include <stdio.h>
#include <stdlib.h>

// Randomizando o programa de lançamento de dado.

int main() {

    int i;
    unsigned seed;

    printf("Digite um numero: ");
    scanf("%u", &seed);

    srand(seed);

    for(i = 0; i <= 10; i++) {

        printf("%10d", 1 + (rand() % 6 ));

        if(i % 5 == 0) {
            printf("\n");
        }

    }

    return 0;
}