#include <stdio.h>

    // Programa que calcula as horas trabalhadas e informa o salario que cada funcionario irá receber

int main () {

    int horas, opcao = 0;
    float salarioHora, totalSalario = 0;

    while(opcao != -1) {    

    printf("Digite # de horas trabalhadas (-1 para terminar) \n");
    scanf("%d", &horas);

    if(horas == -1) {
        opcao = -1;
        break;
    }

    printf("Digite o salario por hora do funcionario (R$00,00): \n");
    scanf("%f", &salarioHora);

    totalSalario = horas * salarioHora;

    printf("Salario é de R$ %.2f\n", totalSalario);

    }

    return 0;
}