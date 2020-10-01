#include <iostream>

#include "Date.h"

using namespace std;

Date::Date(int mes, int dia, int ano)
{
    if(mes > 0 && mes <= 12)
    {
        this->mes = mes;
    }
    else
    {
        this->mes = 1;
    }

    this->dia = dia;
    this->ano = ano;    
}

void Date::setMes(int mes)
{
    if(mes <= 0)
    {
        this->mes = 1;
    }
    else if(mes > 0 && mes <= 12)
    {
        this->mes = mes;
    }
}

void Date::mostraData()
{
    cout << "Dia: " << this->dia << endl;
    cout << "Mes: " << this->mes << endl;
    cout << "Ano: " << this->ano << endl;
    setMes(20);
}

int main()
{
    Date date(3,12,1994);
    date.mostraData();
    date.mostraData();
}