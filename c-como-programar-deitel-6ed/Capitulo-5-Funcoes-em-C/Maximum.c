#include <stdio.h>

// Programa que acha o maior número entre 3 digitados.

int maximum(int x, int y, int z); // protótipo de função

int main(void) {

    int number1, number2, number3;

    printf("Digite três numeros: \n");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Numeros digitados: %d %d %d\n", number1, number2, number3);
    printf("O maior número é: %d\n", maximum(number1, number2, number3));

    return 0;
}

    // Lógica da função maximum
int maximum(int x, int y, int z) {

    int max = x;

    if(y > max) {
        max = y;
    }

    if(z > max) {
        max = z;
    }

    return max;

}