#include <stdio.h>

int main() {

    /* Este programa calcula o produto de três inteiros */

    int x, y, z, resultado;

    printf("Digite três inteiros: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    resultado = x + y + z;

    printf("%d,%d,%d\n", x, y, z);

    printf("O produto é: %d\n", resultado);

    return 0;
}