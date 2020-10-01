#include <stdio.h>

// Cubo de uma variavel usando chamada por Referencia de memória

void CubeByValue(int *nPtr);

int main()
{
    int number = 5;

    printf("O valor original do numero é %d\n", number);

    CubeByValue(&number);

    printf("O novo valor do numero é %d\n", number);

    return 0;
}

void CubeByValue(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}