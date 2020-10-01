#include <stdio.h>
#include <string.h>

int main() {

    int c, estaVariavel, q76354, numero;

    char frase[50] = "Este é um programa em C!!";

    printf("Digite um inteiro: \n");
    scanf("%d", &numero);

    if(numero != 7) {
        printf("A variável numero não é igual a 7\n");
    }

    printf("Este é um programa em C");
    printf("\nEste é um programa em C.\n");
    
    for(int i = 0; i < strlen(frase); i++) {
        printf("%c\n", frase[i]);
    }

    printf("Este\t é \t um \t programa \t em \t C.");

    return 0;
}