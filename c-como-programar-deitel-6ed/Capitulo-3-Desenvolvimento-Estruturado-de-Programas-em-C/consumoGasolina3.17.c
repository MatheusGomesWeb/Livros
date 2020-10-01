#include <stdio.h>

// Programa que calcula o consumo de gasolina dos motoristas.

int main() {

    // Declara as variaveis para armazenar os dados necessarios para o programa

    float numKmDirig, qtdLitrosAbastec, qtdKmRodPorLitro, consumoGeral, totalKmDirig, totalLitrosAbastec = 0;  

    // opcao: -1 encerra o programa
    // contadorAbastec: contador de quantidade de abastecimentos realizada

    int opcao, contadorAbastec = 0;

    // enquanto a opção for diferende de -1 executa o programa

    while(opcao != -1) { 

        printf("Informe quantos litros abasteceu (-1 para terminar) \n");
        scanf("%f", &qtdLitrosAbastec);

    // se o valor digitado de qtdLitrosAbastec for -1, encerra o programa, senão continua para a proxima linha

        if(qtdLitrosAbastec == -1) {
            opcao = -1;
            break;
        }

    // soma o total de litros abastecidos de todas as vezes, e armazena na variavel totalLitrosAbastec

        totalLitrosAbastec += qtdLitrosAbastec;

        printf("Informe quantos Km dirigiu: \n");
        scanf("%f", &numKmDirig);

    // se o valor digitado de numKmDirig for -1, encerra o programa, senão continua para a proxima linha

        if(numKmDirig == -1) {
            opcao = -1;
            break;
        }

    // se o valor for maior ou igual a zero, ou seja: for um valor válido para calcular, entra na condição, senão
    // ele entrou em alguma das condições acima e foi digitado -1, e o programa foi encerrado.

        if(qtdLitrosAbastec >= 0 && numKmDirig >= 0) {        

        totalKmDirig += numKmDirig;

        qtdKmRodPorLitro = numKmDirig / qtdLitrosAbastec;

        printf("O consumo atual é de %f km/l\n", qtdKmRodPorLitro);   

        contadorAbastec++;  

        } 

    } 

    // se a opção for -1, ou seja o programa foi encerrado ou mandou calcular o consumo geral
    // mostra o consumo geral se os valores estiverem corretos
    // ou mostra os erros que precisam ser corrigidos para funcionar o programa

    if(opcao == -1) {        

        if(qtdLitrosAbastec != -1 || numKmDirig != -1) {
            
            consumoGeral = totalKmDirig / totalLitrosAbastec;

            printf("O Consumo geral foi de %f: km/l\n", consumoGeral);              
        }  

        if(contadorAbastec < 2) {
            printf("Erro: precisa ter pelo menos 2 abastecimentos para calcular o Consumo Geral\n");
        }

        if(qtdLitrosAbastec < -1) {
            printf("Erro: a quantidade de Litros abastecidos precisa ser numeros POSITIVOS\n");
        } else if(qtdLitrosAbastec == 0) {
            printf("Erro: informe um valor Litros abastecidos maior que 0\n");
        }     

        if(numKmDirig < -1) {
            printf("Erro: o numero de Km dirigidos precisa ser POSITIVO\n");
        } else if(numKmDirig == 0) {
            printf("Erro: informe um valor de Km dirigidos maior que 0\n");
        }

    }

    return 0;
}