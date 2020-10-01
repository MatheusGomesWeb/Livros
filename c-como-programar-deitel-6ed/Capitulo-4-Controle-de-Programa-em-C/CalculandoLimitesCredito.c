#include <stdio.h>

// Programa que Calcula os limites de crédito de 3 clientes.

int main() {

    char clientName[20];

    int accountNumber;

    float creditLimit, newCreditLimit, currentBalance;

    int i;

    for(i = 0; i < 3; i++) {

        printf("Informe o seu nome: \n");
        scanf("%s", clientName);

        printf("Numero da conta: \n");
        scanf("%d", &accountNumber);

        printf("Limite crédito: \n");
        scanf("%f", &creditLimit);

        printf("Saldo atual: \n");
        scanf("%f", &currentBalance);

        if(creditLimit >= 2000) {

            newCreditLimit = creditLimit / 2;
            
        }
        
        // result
        printf("=======================================\n");
        printf("Client: %s\n", clientName);
        printf("Account Number: %d\n", accountNumber);
        printf("Credit Limit: R$ %.2f\n", creditLimit);
        printf("Current Balance: R$ %.2f\n", currentBalance);
        printf("New Credit Limit: R$ %.2f \n", newCreditLimit);
        printf("=======================================\n");

        if(currentBalance > newCreditLimit) {

            printf("Your Current Balance has exceeded the new Credit Limits.\n");

        }

    }    

    return 0;
}