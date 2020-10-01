#include <stdio.h>

// Função recursiva, calculando numeros fatorias

long fatorial(long number);

int main() {

    int i;

    for(i = 0; i <= 10; i++) {

        printf("%2d! = %ld\n", i, fatorial(i));

    }

    return 0;
}

long fatorial(long number) {

    if(number <= 1) {
        return 1;
    } else {
        return (number * fatorial(number -1));
    }

}