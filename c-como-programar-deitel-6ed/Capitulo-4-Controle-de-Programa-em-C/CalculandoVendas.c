#include <stdio.h>

// Programa que calcula o preço de revenda.

int main() {

    int productNumber;
    float productPrice[5] = {0};
    float totalSales = 0;
    int quantitySold_One_Day;       

    int i = 0;

    while(i < 5) {

    printf("Quantity of products sold on the day: \n");
    scanf("%d", &quantitySold_One_Day);

    printf("Enter the value of the products\n");
    scanf("%f", &productPrice[i]);

    productPrice[i] *= quantitySold_One_Day;

    // Mostra a lista de produtos

    printf("Product Number\tRe-sale price\n");

    int pi;

    for(pi = 0; pi < 5; pi++) {        
        
        printf("%.1d\t\t R$ %.2f\n", pi + 1, productPrice[pi]);
        totalSales += productPrice[pi];           

    }     

    printf("=======================================\n");
    printf("Re-sale total: R$ %.2f\n", totalSales);

    i++;       

    }

    return 0;
}