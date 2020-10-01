#include <stdio.h>

// Programa de média da turma com repetição controlada por contador

int main () {

    int contador = 0;
    float nota, total, media;

    while(contador <= 10) {
        printf("Digite a Nota: \n");
        scanf("%f", &nota);

        total += nota;
        contador += 1;
    }

    media = total / 10;

    printf("Média da turma é %.1f", media);

    return 0;
}