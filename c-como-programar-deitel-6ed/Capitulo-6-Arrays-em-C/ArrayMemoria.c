#include <stdio.h>

// Valor de memoria de um array declarado

int main() {

    char array1[5];

    printf("array = %p\n&array = %p\n array = %p\n", array1, &array1[0], &array1);

    return 0;

}