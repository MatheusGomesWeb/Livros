#include <stdio.h>
#define SIZE 10
#define CONDICIONAL 8 // numero de indices do array contador.

// Programa que calcula a comissão de vendas dos funcionarios

int main()
{
    float valorVenda[SIZE] = {0};
    float salarioFinal[SIZE] = {0};
    float comissao = 0;
    int contador[CONDICIONAL] = {0};

    int i, j;

    for(i = 0; i < SIZE; i++)
    {
        printf("Total de vendas: \n");
        scanf("%f", &valorVenda[i]);

        printf("Vendeu: R$ %.2f\n", valorVenda[i]);

        comissao = (valorVenda[i] * 9) / 100;
        salarioFinal[i] = 200 + comissao;

        printf("Comissão: %.2f\n", comissao);
        printf("Salario Final: %.2f Semanal\n", salarioFinal[i]);

        if(salarioFinal[i] >= 200 && salarioFinal[i] <= 290)
        {
            contador[0]++;
        } 
        else if(salarioFinal[i] >= 300 && salarioFinal[i] <= 399)
        {
            contador[1]++;
        }
        else if(salarioFinal[i] >= 400 && salarioFinal[i] <= 499)
        {
            contador[2]++;
        }
        else if(salarioFinal[i] >= 500 && salarioFinal[i] <= 599)
        {
            contador[3]++;
        }
        else if(salarioFinal[i] >= 600 && salarioFinal[i] <= 699)
        {
            contador[4]++;
        }
        else if(salarioFinal[i] >= 700 && salarioFinal[i] <= 799)
        {
            contador[5]++;
        }
        else if(salarioFinal[i] >= 800 && salarioFinal[i] <= 899)
        {
            contador[6]++;
        }
        else if(salarioFinal[i] >= 1000)
        {
            contador[7]++;
        }

    }   

        printf("Funcionarios que ganham entre 200 - 290: %d\n", contador[0]);
        printf("Funcionarios que ganham entre 300 - 399: %d\n", contador[1]);
        printf("Funcionarios que ganham entre 400 - 499: %d\n", contador[2]);
        printf("Funcionarios que ganham entre 500 - 599: %d\n", contador[3]);
        printf("Funcionarios que ganham entre 600 - 699: %d\n", contador[4]);
        printf("Funcionarios que ganham entre 700 - 799: %d\n", contador[5]);
        printf("Funcionarios que ganham entre 800 - 899: %d\n", contador[6]);
        printf("Funcionarios que ganham mais que 1000: %d\n", contador[7]);    

    return 0;
}