#include <stdio.h>
#include <stdlib.h>

// Programa que simula o lançamento de um dado 6000 vezes.

int main(void) {

    int frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0, frequency5 = 0, frequency6 = 0;

    int roll, face;

    for(roll = 1; roll <= 6000; roll++) {

        face = 1 + rand() % 6;

        switch (face)
        {
        case 1:
            ++frequency1;    
            break;
        case 2:
            ++frequency2;
            break;
        case 3:
            ++frequency3;
            break;
        case 4:
            ++frequency4;
            break;
        case 5:
            ++frequency5;
            break;
        case 6:
            ++frequency6;
            break;   

        }

    }

    printf("%s%13s\n", "Face", "Frequencia");
    printf("    1%13d\n", frequency1);
    printf("    1%13d\n", frequency2);
    printf("    1%13d\n", frequency3);
    printf("    1%13d\n", frequency4);
    printf("    1%13d\n", frequency5);
    printf("    1%13d\n", frequency6);

    return 0;
}