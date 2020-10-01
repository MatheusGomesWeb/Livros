#include <stdio.h>

void staticArrayInit(void);
void automaticArrayInit(void);

// Arrays static

int main()
{

    printf("Primeira chamada para cada função: \n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSegunda chamada para cada função\n");
    staticArrayInit();
    automaticArrayInit();

    return 0;
}

void staticArrayInit(void)
{

    static int array1[3];
    int i;

    printf("\nValores na entrada de staticArrayInit: \n");

    for (i = 0; i <= 2; i++)
    {
        printf("array1[ %d ] = %d ", i, array1[i]);
    }

    printf("\nValores na saída de staticArrayInit:\n");
    /* modifica e mostra conteúdo de array1 */
    for (i = 0; i <= 2; i++)
    {
        printf("array1[ %d ] = %d ", i, array1[i] += 5);
    }
}

void automaticArrayInit(void)
{

    /* inicializa elementos toda vez que a função é chamada */
    int array2[3] = {1, 2, 3};
    int i; /* contador */
    printf("\n\nValores na entrada de automaticArrayInit:\n");

    /* exibe conteúdo de array2 */
    for (i = 0; i <= 2; i++)
    {
        printf("array2[ %d ] = %d ", i, array2[i]);
    } /* fim do for */
    printf("\nValores na saída de automaticArrayInit:\n");

    for (i = 0; i <= 2; i++)
    {
        printf("array2[ %d ] = %d ", i, array2[i] += 5);
    } /* fim do for */
}