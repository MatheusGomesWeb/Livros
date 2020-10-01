#include <stdio.h>
#define SIZE 10

int whatIsThis(const int b[], int p);

int main()
{
    int x;

    int a[SIZE] = {1,2};

    x = whatIsThis(a, SIZE);

    printf("Resultado é: %d\n", x);

    return 0;
}

int whatIsThis(const int b[], int p)
{
    if(p == 1)
    {
        return b[0];
    }
    else
    {
        return b[p - 1] + whatIsThis(b, p - 1);
    }
    
}