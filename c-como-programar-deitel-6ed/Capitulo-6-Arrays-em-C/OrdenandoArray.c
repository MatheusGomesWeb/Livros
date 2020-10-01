#include <stdio.h>
#define SIZE 10
// Ordenando array com bubble sort (ordem crescente - 1,2,3,4.....)

int main() {

    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int pass;
    int i;
    int hold;

    printf("Itens de dados na ordem original: ");

    for(i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }

    printf("\n");

    for(pass = 1; pass < SIZE; pass++) {

        for(i = 0; i < SIZE - 1; i++) {

            if(a[i] > a[i + 1]) {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }

        }

    }

    printf("Itens de dados ordenados de forma crescente (Bubble sort): ");

    for(i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }

    printf("\n");

    return 0;
}