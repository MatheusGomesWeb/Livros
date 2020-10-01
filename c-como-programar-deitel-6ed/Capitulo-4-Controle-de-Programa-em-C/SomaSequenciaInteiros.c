#include <stdio.h>

// Programa que soma uma sequencia de inteiros.

int main() {

    int max_values, values, result = 0;

    int count = 0;

    printf("Insira a quantidade de valores para somar: ");
    scanf("%d", &max_values);

    while(count < max_values) {        

        scanf("%d", &values);
        result += values;

        count++;

    }

    printf("Soma dos %d números: %d\n", max_values, result);

    return 0;
}