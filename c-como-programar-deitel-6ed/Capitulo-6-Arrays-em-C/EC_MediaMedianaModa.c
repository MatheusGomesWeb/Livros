#include <stdio.h>

// Esse programa introduz o tópico da análise de dados de pesquisa.
// Ele calcula a média, a mediana e a moda dos dados

#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main(void)
{

    int frequency[10] = {0};

    int response[SIZE] = {

        6, 7, 8, 7, 8, 9, 6, 7, 8, 7, 8, 9, 6, 7, 8, 7, 8, 9,
        5, 6, 7, 7, 8, 9, 7, 4, 4, 4, 5, 6, 9, 8, 7, 5, 9, 8,
        9, 3, 9, 8, 9, 8, 7, 8, 7, 8, 9, 8, 2, 5, 3, 6, 8, 7,
        2, 5, 3, 1, 6, 5, 8, 7, 8, 9, 9, 9, 9, 8, 8, 7, 9, 8,
        7, 7, 8, 7, 4, 9, 7, 8, 8, 9, 7, 8, 8, 7, 8, 9, 9, 2,
        5, 3, 6, 4, 7, 8, 5, 6, 7};

    mean(response);

    median(response);
    
    mode(frequency, response);

    return 0;
} // main

void mean(const int answer[])
{

    int j;

    int total = 0;

    printf("%s\n%s\n%s\n", "********", "Média", "********");

    for (j = 0; j < SIZE; j++)
    {

        total += answer[j];
    }

    printf("A média é o valor médio dos itens de dados.\n");
    printf("A média é igual ao total de todos\n");
    printf("os itens de dados divididos pelo número\n");
    printf("de itens de dados ( %d ). O valor médio para esta\n", SIZE);
    printf("execução é: %d / %d = %.4f\n\n", total, SIZE, (double)total / SIZE);
} // mean

void median(int answer[])
{

    printf("\n%s\n%s\n%s\n%s", "********", "Mediana", "********", "O array de respostas, não ordenado, é");

    printArray(answer);
    bubbleSort(answer);

    printf("\n\nO array ordenado é:");
    printArray(answer);

    printf("\n\nA mediana é o elemento %d do \n", SIZE / 2);
    printf("array ordenado de %d elementos.\n", SIZE);
    printf("Para essa execução, a mediana é %d\n\n", answer[SIZE / 2]);
} // median

void mode(int freq[], const int answer[])
{

    int rating;
    int j;
    int h;
    int largest = 0;
    int modeValue = 0;

    printf("\n%s\n%s\n%s\n", "********", " Moda", "********");

    for (rating = 1; rating <= 9; rating++)
    {

        freq[rating] = 0;
    }

    for (j = 0; j < SIZE; j++)
    {

        ++freq[answer[j]];
    }

    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Resposta", "Frequência", "Histograma", "1 1 2 2", "5 0 5 0 5");

    for (rating = 1; rating <= 9; rating++)
    {

        printf("%8d%11d ", rating, freq[rating]);

        if (freq[rating] > largest)
        {

            largest = freq[rating];
            modeValue = rating;
        }

        for (h = 1; h <= freq[rating]; h++)
        {

            printf("*");
        }

        printf("\n");
    }

    printf("A moda é o valor mais frequente.\n");
    printf("Para essa execução, a moda é %d, que ocorreu\n", modeValue);
    printf("%d vezes.\n", largest);
} // mode

void bubbleSort(int a[])
{

    int pass;
    int j;
    int hold;

    for (pass = 1; pass < SIZE; pass++)
    {

        for (j = 0; j < SIZE - 1; j++)
        {

            if (a[j] > a[j + 1])
            {

                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }

} // bubbleSort

void printArray(const int a[])
{

    int j;

    for (j = 0; j < SIZE; j++)
    {

        if (j % 20 == 0)
        {

            printf("\n");
        }

        printf("%2d", a[j]);
    }

} // printArray