#include <stdio.h>

/*
    PRÉ - INCREMENTO E DECREMENTO
    * incremento: utiliza o valor atual e soma +1 na proxima utilização da variavel
    * decremento: utiliza o valor atual e subtrai (diminui) -1 na proxima utilização da variavel
    * pre-incremento: soma +1 na variavel e utiliza a variavel com +1 na utilização
    * pre-decremento: subtrai(diminui) -1 na variavel e utiliza a variavel com -1 na utilização
 */

int main () {

    int c;

    c = 5;

    printf("Pós-incremento\n");
    printf("%d\n", c);
    printf("%d\n", c++);
    printf("%d\n", c);

    c = 5;
    printf("Pré-incremento\n");
    printf("%d\n", c);
    printf("%d\n", ++c);
    printf("%d\n", c);

    return 0;
}