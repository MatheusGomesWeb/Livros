#include <stdio.h>
#include <math.h>

// Programa de Calculo de Juros Compostos

int main() {

    double valor;
    double principal = 1000.0;
    double taxa = .05;
    int ano;


    // %4s - 4 casas (tamanho do campo), %21s - 21 casas (tamanho do campo) .2f - 2 valores depois da virgula
    printf("%4s%21s\n ", "Ano", "Valor da conta");

    for(ano = 1; ano <= 10; ano++) {

        valor = principal * pow(1.0 + taxa, ano);

        printf("%4d%21.2f\n", ano, valor);
    }

    return 0;
}