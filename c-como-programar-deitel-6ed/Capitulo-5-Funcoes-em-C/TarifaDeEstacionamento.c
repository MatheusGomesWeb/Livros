#include <stdio.h>

// Programa que calcula a tarifa e a taxa de estacionamento

// protótipos de funções
void initialize(void);
void result(void);

float total(float tempoPermanencia, float taxa);

int id;
float tempoPermanencia;
float taxa;

int main()
{

    initialize();

    return 0;
}

// Função de Inicialização do programa
void initialize()
{

    int cont = 1;

    while (cont < 4)
    {

        printf("Carro Nº: \n");
        scanf("%d", &id);
        printf("Tempo Pemanencia: \n");
        scanf("%f", &tempoPermanencia);

        cont++;

        result();
    }
}

// Calcular taxas
float calcularTotal(float tempoPermanencia, float taxa)
{

    float total = 0.00;

    total = tempoPermanencia + taxa;

    return total;
}

// Result
void result()
{

    if (tempoPermanencia > 3 && tempoPermanencia < 10)
    {

        taxa = (tempoPermanencia / 2) + 0.50;
    }
    else if (tempoPermanencia >= 10)
    {

        taxa = 10.00;
    }
    else
    {

        taxa = 2.00;
    }

    printf("ID\tHoras\tTaxa\n");

    printf("%d\t%.2f\t%.2f\n", id, tempoPermanencia, taxa);

    // total
    printf("Total: R$ %.2f\n", calcularTotal(tempoPermanencia, taxa));
}
