#include <stdio.h>

// Programa que determina se um cliente de uma loja de departamentos excedeu o limite de crédito.

int main() {

    // variaveis do programa

    int numeroConta, op = 0;
    float saldoInicioMes, totalTodosEncarg, totalTodosCreditMes, limiteCredAutoriz, novoSaldoConta = 0;

    while(op != -1) {

        printf("Informe o numero da Conta: -1 para terminar \n");
        scanf("%d", &numeroConta);

    // se a opção for -1, op = -1, sai do laço de repetição e encerra o programa.

        if(numeroConta == -1) {
            op = -1;
            break;
        }

    // pega os dados da conta do cliente e armazena nas respectivas variaveis

        printf("Informe o saldo inicial: \n");
        scanf("%f", &saldoInicioMes);

        printf("Informe o total de encargos: \n");
        scanf("%f", &totalTodosEncarg);

        printf("Informe o total de créditos: \n");
        scanf("%f", &totalTodosCreditMes);

        printf("Informe o limite de crédito: \n");
        scanf("%f", &limiteCredAutoriz);

        // Calcula o novo saldo da conta ( limite de creito )

        novoSaldoConta = (saldoInicioMes + totalTodosEncarg) - totalTodosCreditMes;

        // mostra os dados digitados e a soma do limite de credito
        printf("Conta: %d\n", numeroConta);
        printf("Limite de credito: %.2f\n", limiteCredAutoriz);
        printf("Saldo: %.2f\n", novoSaldoConta);

        // se o novo saldo da conta, for maior que o limite de crédito, informa que o limite de crédito foi ultrapassado.
        if(novoSaldoConta > limiteCredAutoriz) {
            printf("Limite de crédito ultrapassado. \n");
        }

    }

    return 0;
}