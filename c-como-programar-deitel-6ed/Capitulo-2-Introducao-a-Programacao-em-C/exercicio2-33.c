#include <stdio.h>

int main() {

    float totalKmDia, custoLitroComb, mediaKmLitro, precoEstacDia, gastosDiaPedagio, consumoKmRodado;

    printf("Total Km Dirigidos por Dia: \n");
    scanf("%f", &totalKmDia);

    printf("Custo por Litro de Combustivel: \n");
    scanf("%f", &custoLitroComb);

    printf("Média de Km por Litro: \n");
    scanf("%f", &mediaKmLitro);

    printf("Preço estacionamento por dia: \n");
    scanf("%f", &precoEstacDia);

    printf("Gastos Diarios com Pedágios: \n");
    scanf("%f", &gastosDiaPedagio);

    consumoKmRodado = custoLitroComb / totalKmDia;

    printf("====RESULTADOS====\n");
    printf("Total Km Dirigidos por Dia: %.3f Km\n", totalKmDia);
    printf("Custo por Litro de Combustivel: R$ %.2f\n", custoLitroComb);
    printf("Média de Km por Litro: %.3f Km\n", mediaKmLitro);
    printf("Preço estacionamento por dia: R$ %.2f\n", precoEstacDia);
    printf("Gastos Diarios com Pedágios: R$ %.2f\n", gastosDiaPedagio);
    printf("=====================\n");
    printf("R$ %.2f por Km Rodado!\n", consumoKmRodado);

    return 0;
}