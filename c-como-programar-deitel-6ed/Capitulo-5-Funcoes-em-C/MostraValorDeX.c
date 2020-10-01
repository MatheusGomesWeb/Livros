#include <stdio.h>
#include <math.h>

// Programa que mostra o valor de x utilizando funções da biblioteca Math.h

/* 
    * fabs: arredonda o numero para baixo e positivo
    * floor: arredonda o numero para baixo
    * ceil: arredonta para cima se positio e baixo se negativo
*/

int main() {

    int x;

    x = fabs(7.5);
    printf("%d\n", x);

    x = floor(7.5);
    printf("%d\n", x);

    x = fabs(0.0);
    printf("%d\n", x);

    x = ceil(0.0);
    printf("%d\n", x);

    x = fabs(-6.4);
    printf("%d\n", x);

    x = ceil(-6.4);
    printf("%d\n", x);

    x = ceil(-fabs(-8 + floor(-5.5)));
    printf("%d\n", x);

    return 0;
}