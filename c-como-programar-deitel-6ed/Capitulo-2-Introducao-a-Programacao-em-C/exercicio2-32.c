#include <stdio.h>

int main()
{
    float imc, pesoEmQuilos, alturaEmMetros;

    printf("Seu peso: \n");
    scanf("%f", &pesoEmQuilos);
    printf("Sua altura: \n");
    scanf("%f", &alturaEmMetros);

    imc = pesoEmQuilos / (alturaEmMetros * alturaEmMetros);

    printf("IMC: %.2f\n", imc);

    printf("VALORES DE IMC\n Abaixo do peso: menor que 18,5\n Normal: entre 18,5 e 24,9\n Acima do Peso: entre 25 e 29,9 \n Obeso: 30 ou mais\n");

    if(imc < 18.5) {
        printf("Abaixo do Peso\n");
    }
    if(imc >= 18.5 && imc <= 24.9) {
        printf("Peso Normal\n");
    }
    if(imc >= 25 && imc <= 29.9) {
        printf("Acima do Peso\n");
    }
    if(imc >= 30) {
        printf("Obeso!\n");
    }

return 0;
}