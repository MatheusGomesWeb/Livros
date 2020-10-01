#include <iostream>

#include "Complex.h"

using namespace std;

Complex::Complex(double real, double ptImaginaria)
{
    setNumReal(real);
    setPtImaginaria(ptImaginaria);
}

void Complex::soma(int i)
{
    this->total = this->numReal + this->ptImaginaria * i;
}

void Complex::result()
{
    cout << "A soma de Complex é: " << getTotal() << endl;
    cout << "O numero real é: " << getNumReal() << endl;
    cout << "A Parte Imaginária é: " << getPtImaginaria() << endl;
}

void Complex::setNumReal(double nr)
{
    this->numReal = (nr >= 0) ? nr : 0;
}

void Complex::setPtImaginaria(double pti)
{
    this->numReal = (pti >= 0) ? pti : 0;
}

double Complex::getTotal()
{
    return this->total;
}

double Complex::getNumReal()
{
    return this->numReal;
}

double Complex::getPtImaginaria()
{
    return this->ptImaginaria;
}

int main()
{
    Complex c(1.25,3.25);
    c.soma(2);
    c.result();
}