#include <stdio.h>

#define SIZE 5

// Passando arrays e elementos individuais do array para funções.

void modifyArray(int b[], int size);
void modifyElement(int e);

int main() {

    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Efeitos da passagem do array inteiro por referencia: \n\n Os valores do array original são:\n");

    for(i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }

    printf("\n");

    modifyArray(a, SIZE);

    printf("Os valores do array modificado são: \n");

    for(i = 0; i < SIZE; i++) {
        printf("%3d", a[i]);
    }

    printf("\n\nEfeitos de passar elemento do array por valor: \n\n O valor de a[3] é %d\n", a[3]);

    modifyElement(a[3]);

    printf("O valor de a[3] é %d\n", a[3]);

    return 0;
}

void modifyArray(int b[], int size) {

    int j;

    for(j = 0; j < size; j++) {
        b[j] *= 2;
    }

}

void modifyElement(int e) {

    printf("O valor de modifyElement é %d\n", e *= 2);

}