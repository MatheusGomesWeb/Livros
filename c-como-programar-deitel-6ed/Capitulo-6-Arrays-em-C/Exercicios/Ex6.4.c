#include <stdio.h>
#define SIZE 3

int main()
{
    int table[SIZE][SIZE] = {{0,1,2}, {5,6,7}, {9,10,11}};

    int i, j;

    int linhas = 0, colunas = 0;

    for(i = 0; i < SIZE; i++)
    {
        linhas++;

        for(j = 0; j < SIZE; j++)
        {
            colunas++;

            printf("table[%d][%d] = %d\n", i, j, table[i][j]);
        }

    }

        printf("Linhas: %d\n", linhas);
        printf("Colunas: %d\n", colunas);
        printf("Cada linha possui %d colunas\n", colunas / linhas);

    return 0;
}