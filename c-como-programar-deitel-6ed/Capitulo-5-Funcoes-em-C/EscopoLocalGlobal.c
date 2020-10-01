#include <stdio.h>

// Exemplo de escopo local e global

    void useLocal(void);
    void useStaticLocal(void);
    void useGlobal(void);

    int x = 1;

int main(void) {

    int x = 5;

    printf("x local no escopo interno de main é %d\n", x);

    {
        int x = 7;

        printf("x local no novo escopo interno de main é %d\n", x);
    }

    printf("x local no escopo interno de main é %d\n", x);

    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();

    return 0;
}

    void useLocal(void) {
        int x = 25;

        printf("\nlocal em useLocal é %d após entrar em useLocal\n", x);
        x++;
        printf("\nlocal em useLocal é %d antes de sair em useLocal\n", x);

    }

    void useStaticLocal(void) {
        static int x = 50;

        printf("\n x static local é %d no escopo local de useLocal\n", x);
        x++;
        printf("x static local é %d no escopo local de useLocal incrementando + 1\n", x);
        
    }

    void useGlobal(void) {
        printf("\nglobal é %d na entrada de useGlobal\n", x);   
        x *= 10;
        printf("\nglobal é %d na saida de useGlobal\n", x);   

    }