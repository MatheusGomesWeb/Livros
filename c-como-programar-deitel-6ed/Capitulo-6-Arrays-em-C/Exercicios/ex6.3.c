#include <stdio.h>
#define SIZE 10

int main()
{
    double fractions[SIZE] = {0};

    int x;

    fractions[9] = 1.667;
    fractions[7] = 3.333;

    printf("%lf\t%lf\n", fractions[9], fractions[7]);

    printf("=====================\n");

    for(x = 0; x < SIZE; x++)
    {
        printf("%lf\t\n", fractions[x]);
    }

    return 0;
}