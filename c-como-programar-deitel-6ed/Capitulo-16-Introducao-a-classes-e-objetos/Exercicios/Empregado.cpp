#include <iostream>

#include "Empregado.h"

using namespace std;

Empregado::Empregado(string nome, string sobrenome, int salarioMensal)
{
    this->nome = nome;
    this->sobrenome = sobrenome;

    if(salarioMensal >= 0)
    {
        this->salarioMensal = salarioMensal;
    }
    else
    {
        this->salarioMensal = 0;
    }
    
}

string Empregado::getNome()
{
    return this->nome;
}

string Empregado::getSobrenome()
{
    return this->sobrenome;
}

int Empregado::getSalarioMensal()
{
    return this->salarioMensal;
}

void Empregado::aumentoSalario(int value)
{
    this->salarioAumento = (this->salarioMensal * value) / 100;

    cout << "Aumentando " << value << "% no salario" << endl;
}

void Empregado::displayMessage()
{
    cout << "Salario Mensal Final: " << this->salarioMensal << endl;
    cout << "Salario anual: " << this->salarioMensal * 12 << endl;    
    aumentoSalario(10);
    cout << "Salario com aumento: " << this->salarioMensal + this->salarioAumento << endl;
}

int main()
{
    Empregado emp1("Matheus", "Gomes", 1000);
    cout << "Emp 1: " << endl;
    cout << emp1.getNome() << endl;
    cout << emp1.getSobrenome() << endl;
    cout << emp1.getSalarioMensal() << endl;
    emp1.displayMessage();
    cout << "===============" << endl;

    Empregado emp2("Silvana", "Gomes", 5000);
    cout << "Emp 2: " << endl;
    cout << emp2.getNome() << endl;
    cout << emp2.getSobrenome() << endl;
    cout << emp2.getSalarioMensal() << endl;
    emp2.displayMessage(); 
    cout << "===============" << endl;
}
