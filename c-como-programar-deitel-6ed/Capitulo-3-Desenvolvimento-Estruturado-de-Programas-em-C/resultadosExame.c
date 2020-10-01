#include <stdio.h>

// Programa que Analisa os resultados do exame dos alunos
int main () {

    int aprovados, reprovados = 0;
    int aluno = 1;
    int resultado;

    while(aluno <= 10) {

        printf("Forneça o resultado: (1 = Aprovado, 2 = Reprovado: \n");
        scanf("%d", &resultado);

        if(resultado == 1) {
            aprovados += 1;
        } else {
            reprovados += 1;
        }

        aluno += 1;
    }

    printf("Aprovados: %d\n", aprovados);
    printf("Reprovados: %d\n", reprovados);

    if(aprovados > 8) {
        printf("Bonus para o Instrutor!\n");
    }

    return 0;
}