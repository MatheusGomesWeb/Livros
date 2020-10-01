#include <stdio.h>

// Programa de média da turma com repetição controlada por sentinela

int main() {
    
    int total, contador = 0;
    int nota;
    float media;

    printf("Digita a nota, -1 no fim\n");
    scanf("%d", &nota);

    while(nota != -1) {
        total += nota;
        contador += 1;

        printf("Digite a nota, -1 para finalizar: ");
        scanf("%d", &nota);
    }

    if(contador != 0) {
        media = (float) total / contador;
        
        printf("Média da turma: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada.");
    }

    return 0;
}