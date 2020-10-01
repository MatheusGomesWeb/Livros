#include <stdio.h>

    // Programa que calcula o valor de comissão por venda dos vendedores de produtos quimicos.

int main() {

    float valorVenda, comissao, valorSemanal = 0;
    int op = 0;

    while(op != -1) {
        printf("Informe a venda em reais (-1 para terminar): \n");
        scanf("%f", &valorVenda);

        if(valorVenda == -1) {
            op = -1;
            break;
        }

        comissao = (valorVenda * 9) / 100;
        valorSemanal = comissao + 200;

        printf("O pagamento é de: R$ %.2f reais\n", valorSemanal);
    }


    return 0;
}