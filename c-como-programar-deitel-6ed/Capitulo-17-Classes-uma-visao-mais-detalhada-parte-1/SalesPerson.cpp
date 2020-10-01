#include <iostream>
#include <iomanip>

#include "SalesPerson.h"

using namespace std;

SalesPerson::SalesPerson()
{
    for(int i = 0; i < monthsPerYear; i++)
    {
        sales[i] = 0.0;
    }
}

void SalesPerson::getSalesFromUser()
{
    float salesFigure;

    for(int i = 1; i <= monthsPerYear; i++)
    {
        cout << "Digite valor de vendas para o mes: " << i << ": ";
        cin >> salesFigure;
        setSales(i, salesFigure);
    }
}

void SalesPerson::setSales(int month, float amount)
{
    if(month >= 1 && month <= monthsPerYear && amount > 0)
    {
        sales[month - 1] = amount;
    }
    else
    {
        cout << "Mes ou valor de vendas inválido" << endl;
    }
    
}

void SalesPerson::printAnnualSaleS()
{
    cout << setprecision(2) << fixed << "\nO total anual de vendas é: $" << totalAnnualSales() << endl;
}

float SalesPerson::totalAnnualSales()
{
    float total = 0.0;

    for(int i = 0; i < monthsPerYear; i++)
    {
        total += sales[i];
    }

    return total;
}

int main()
{

    SalesPerson s;

    s.getSalesFromUser();
    s.printAnnualSaleS();

}