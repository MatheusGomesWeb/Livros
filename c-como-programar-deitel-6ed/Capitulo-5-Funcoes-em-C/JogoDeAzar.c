#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Exemplo: Um jogo de azar


    // constantes de enumeração representam status do jogo

    enum Status { CONTINUE, WON, LOST }; // array de constantes

    int rollDice (void); // prototipo de função


int main () {

    int sum;
    int myPoint;

    enum Status gameStatus; // instancia a estrutura de dados ENUM

    srand(time(NULL)); // gera numeros randomicos de TIME

    sum = rollDice(); // sum recebe o método rollDice implementado

    switch(sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Ponto é %d\n", myPoint);
            break;    
    }

    while (gameStatus == CONTINUE) {
        sum = rollDice();

        if(sum == myPoint) {
            gameStatus = WON;
        } else {
            if(sum == 7) {
                gameStatus = LOST;
            }
        }
    }

    if(gameStatus == WON) {
        printf("Jogador vence\n");
    } else {
        printf("Jogador Perde\n");
    }
    

    return 0;
}

int rollDice() {
    int die1;
    int die2;
    int workSum;

    die1 = 1 + (rand() % 6);
    die2 = 1 + (rand() % 6);
    workSum = die1 + die2;

    printf("Jogador rolou %d + %d = %d\n", die1, die2, workSum);

    return workSum;
}