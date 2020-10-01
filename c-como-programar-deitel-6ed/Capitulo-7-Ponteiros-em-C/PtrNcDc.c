#include <stdio.h>

/*
    Utilizando ponteiro não constante para dados contantes
 */

void printCharacters(const char *sPtr);

int main()
{
    char string[] = "imprime caracteres de uma string";

    printf("A string é\n");
    printCharacters(string);
    printf("\n");

    return 0;
}

void printCharacters(const char *sPtr)
{
    for(; *sPtr != '\0'; sPtr++)
    {
        printf("%c", *sPtr);
    }
}