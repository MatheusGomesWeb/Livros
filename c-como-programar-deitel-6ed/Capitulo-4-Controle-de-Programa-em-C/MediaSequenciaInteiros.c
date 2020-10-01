#include <stdio.h>

// Programa que calcula a média entre uma sequencia de inteiros informados.

int main() {

    int values, count_values = 0, sum_values = 0;
    float result = 0;

    int sentinel_value; 

    while(sentinel_value != 9999) {

    printf("Informe os números: (9999) para finalizar programa.\n");
    scanf("%d", &values);

        if(values == 9999) {
            
            sentinel_value = 9999;

        } else {

            count_values++;
            sum_values += values;
            result = sum_values / count_values;
        }

    }

    printf("Quantidade de Valores: %d\n", count_values);
    printf("A soma dos valores é: %d\n", sum_values);
    printf("A média dos valores é: %f\n", result);

    return 0;
}