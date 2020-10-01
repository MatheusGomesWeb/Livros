#include <stdio.h>

// Tratanto arrays de caracteres como strings

int main() {

    char string1[20];
    char string2[] = "string literal";

    int i;

    printf("Digite uma string \n");
    scanf("%s", string1);

    printf("String1 é: %s\n String2 is: %s\n", string1, string2);

    for (i = 0; string1[i] != '\0'; i++)
    {
        printf("%c", string1[i]);
    }

    printf("\n");
    

    return 0;
}