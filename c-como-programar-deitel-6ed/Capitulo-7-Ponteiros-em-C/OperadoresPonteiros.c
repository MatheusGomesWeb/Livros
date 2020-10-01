#include <stdio.h>

// Usando os operadores & e *

int main() 
{
    int a;
    int *aPtr;

    a = 7;
    aPtr = &a;

    printf("O endereço de a é %p\n O valor de aPtr é %p\n", &a, aPtr);
    printf("O endereço de a é %d\n O valor de aPtr é %d\n", a, *aPtr);
    printf("Mostrando que * e & são complementos um do outro\n&*aPtr = %p\n*&aPtr = %p\n", &*aPtr, *&aPtr);

    return 0;
}