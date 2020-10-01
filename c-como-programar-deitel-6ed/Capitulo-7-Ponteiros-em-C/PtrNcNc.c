#include <stdio.h>
#include <ctype.h>

/*
    * Convertendo uma string em maiusculas usando um ponteiro não
    * contante para dados não constantes
 */

void convertToUppercase(char *sPtr);

int main()
{

    char string[] = "caracteres e R$32,98";

    printf("A string antes da conversão: %s\n", string);
    convertToUppercase(string);
    printf("A string depois da conversão: %s\n", string);

    return 0;
}

void convertToUppercase(char *sPtr)
{
    while(*sPtr != '\0')
    {
        if(islower(*sPtr))
        {
            *sPtr = toupper(*sPtr);
        }
        
        ++sPtr;
    }
}