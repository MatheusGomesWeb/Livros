#include <iostream>

#include "Account.h"

using namespace std;

Account::Account(int mes, int dia, int ano, int saldo)
{
    if(mes >= 1 && mes <= 12)
    {
        this->mes = mes;
    }
    else {
        displayMessage("Erro: Informe um mes válido (1-12).");
        exit(1);
    }

    this->dia = dia;
    this->ano = ano;

    if(saldo > 0)
    {
        this->saldo = saldo;
    }
    else {
        this->saldo = 0;
    }
}

void Account::displayMessage(string message)
{
    cout << message << endl;
}

void Account::displayMessage()
{
    cout << "Mes: " << mes << "\nDia: " << dia << "\nAno: " << ano << "\nSaldo: " << saldo << endl;
    cout << "======================" << endl;
}

int Account::credit(int saldo)
{
    if(saldo > 0) {
        this->total = this->saldo + saldo;
    }
    else
    {
        total = this->saldo;
    }    
}

int Account::debit(int saldo)
{
    if(saldo < this->total)
    {
        this->total -= saldo;
    }
    else {
        return this->total;
    }
}

int Account::getTotal()
{
    return this->total; 
}

// Main()
int main()
{
    Account conta(3, 12, 1994, 2000);
    conta.displayMessage();

    conta.credit(1500);
    cout << "Total!: " << conta.getTotal() << endl;

    conta.debit(4000);
    cout << "Total: " << conta.getTotal() << endl;

}