#include <stdio.h>
#define SIZE 10
int main()
{
    int counts[SIZE] = {0};
    int bonus[SIZE];
    int soma[SIZE] = {0};
    int maior;
    int pass;

    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Insira o valor de counts: ");
        scanf("%d", &counts[i]);
    }

    printf("Counts: ");

    for (i = 0; i < SIZE; i++)
    {

        printf("%d ", counts[i]);
    }

    printf("\n");

    printf("Bonus: ");

    for (i = 0; i < SIZE; i++)
    {
        bonus[i] = counts[i] + 1;

        printf("%d ", bonus[i]);
    }

    printf("\n");

    printf("Soma anterior com proximo\n");

    for (i = 0; i < SIZE; i++)
    {
        soma[i] += bonus[i] + bonus[i + 1];

        printf("%d ", soma[i]);
    }

    printf("\n");

    printf("Array soma ordenado (Bubble Sort) \n");

    for (pass = 1; pass < SIZE; pass++)
    {

        for (i = 0; i < SIZE - 1; i++)
        {
            if (soma[i] > soma[i + 1])
            {
                maior = soma[i];
                soma[i] = soma[i + 1];
                soma[i + 1] = maior;
            }
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", soma[i]);
    }

    printf("\n");

    return 0;
}