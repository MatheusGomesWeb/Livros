#include <stdio.h>

// Imprime uma sequencia de valores utilizando o laço de repetição FOR

int main() {

    int n1,n2,n3;

    for(n1 = 1; n1 <= 7; n1++) {
        printf("%d ", n1);
    }

    printf("\n");

    for(n2 = 3; n2 <= 23; n2++) {       
        printf("%d ", n2);
         n2 += 4;
    }

    printf("\n");

    for(n3 = 19; n3 <= 51; n3++) {
        printf("%d ", n3);
        n3 += 7;
    }

    return 0;
}