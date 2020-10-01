#include <stdio.h>

    // Programa que calcula e apresenta a taxa de juros simples para cada empréstimo

int main () {

    float principal, taxa, dias, valorJuros = 0;
    int op = 0;

    while(op != -1) {

        printf("Informe o valor principal do empréstimo (-1 para terminar): \n");
        scanf("%f", &principal);

        if(principal == -1) {
            op = -1;
            break;
        }

        printf("Informe a taxa de juros: \n");
        scanf("%f", &taxa);

        printf("Informe o prazo de empréstimo em dias: \n");
        scanf("%f", &dias);

        valorJuros = (principal * taxa * dias) / 365;

        printf("O valor dos juros é de: R$ %.2f\n", valorJuros);

    }

    return 0;
}