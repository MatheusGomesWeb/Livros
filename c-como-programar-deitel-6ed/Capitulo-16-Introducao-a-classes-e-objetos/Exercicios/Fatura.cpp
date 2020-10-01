#include <iostream>

#include "Fatura.h"

using namespace std;

// Constructor
Fatura::Fatura(string numero, string descricao, int quantidade, int preco)
{
    this->numero = numero;
    this->descricao = descricao;

    if(quantidade >= 0 && preco >= 0)
    {
        this->quantidade = quantidade;
        this->preco = preco;
    }

    else 
    {
        this->quantidade = 0;
        this->preco = 0;
    }    
}

// Setters
void Fatura::setNumero(string numero)
{
    this->numero = numero;
}

void Fatura::setDescricao(string descricao)
{
    this->descricao = descricao;
}

void Fatura::setQuantidade(int quantidade)
{   
    this->quantidade = isPositive(quantidade);
}

void Fatura::setPreco(int preco)
{
    this->preco = isPositive(preco);
}

// Getters
string Fatura::getNumero()
{
    return this->numero;
}

string Fatura::getDescricao()
{
    return this->descricao;
}

int Fatura::getQuantidade()
{
    return this->quantidade;
}

int Fatura::getPreco()
{
    return this->preco;
}

// Validate Positive numbers
int Fatura::isPositive(int number)
{
    if(number >= 0)
    {
        return number;
    }

    else
    {
        cout << "Informe um numero positivo ! ( >= 0)" << endl;
        exit(1);
    }    
}

// Result Method
int Fatura::obterValorFatura()
{ 
    this->total = this->preco * this->quantidade;

    return this->total;
}

// Main
int main()
{
    Fatura fatura("123", "Parafuso", 2, 10);

    fatura.setPreco(20);
    fatura.setQuantidade(1);

    cout << "O Valor final é: " << fatura.obterValorFatura() << endl;
}