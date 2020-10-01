#include <stdio.h>

// Inicializando arrays

int main() {

    //int n[10];
    int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    int i;

    /*for(i = 0; i < 10; i++) {
        n[i] = 0;
    }*/

    printf("%s%13s\n", "Elemento", "Valor");

    for(i = 0; i < 10; i++) {
        printf("%7d%13d\n", i, n[i]);
    }

    return 0;
}