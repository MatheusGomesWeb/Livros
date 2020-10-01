#include <stdio.h>
#include <math.h>

// Programa que arredonda numeros usando floor
// floor arredonda para baixo

float arredonda(float numero);

int main() {

    float numero;

    printf("Digite um numero para ser arredondado: \n");
    scanf("%f", &numero);

    printf("Numero sem arredondar: %.2f\n", numero);

    printf("Arredondado: %.2f\n", arredonda(numero));

    return 0;
}

float arredonda(float numero) {

    return floor(numero);

}