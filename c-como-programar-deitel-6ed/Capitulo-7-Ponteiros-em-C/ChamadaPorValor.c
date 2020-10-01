#include <stdio.h>

// Cubo de uma variavel usando chamada por Valor

int CubeByValue(int n);

int main()
{
    int number = 5;

    printf("O valor original do numero é %d\n", number);

    number = CubeByValue(number);

    printf("O novo valor do numero é %d\n", number);

    return 0;
}

int CubeByValue(int n) {
    return n * n * n;
}