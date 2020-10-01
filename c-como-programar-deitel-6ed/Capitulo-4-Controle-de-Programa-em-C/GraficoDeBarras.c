#include <stdio.h>

// Programa que exibe um gráfico de barras.

int main() {

    int value;

    int max_values = 0;      

    while(max_values < 5) {   

        printf("Tamanho do gráfico: (1 a 30) ");
        scanf("%d", &value);

        if(value > 30) {

            printf("Valores precisam ser no máximo 30.");

        } else if(value < 0) {

            printf("Valor precisa ser positivo.");

        } else {

            int i; 

            for(i = 0; i < value; i++) {
                printf("*");
            }            

            max_values++; 

        }       

            printf("\n");
    }

    return 0;
}