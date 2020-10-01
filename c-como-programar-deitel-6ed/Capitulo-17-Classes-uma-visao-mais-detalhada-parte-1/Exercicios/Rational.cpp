#include <iostream>

#include "Rational.h"

using namespace std;

Rational::Rational(int n, int d)
{
    this->numerador = (n >= 0) ? n : 0;
    this->denominador = (d >= 0) ? d : 0;
}

int Rational::somar()
{
    return this->denominador + this->numerador;
}

int Rational::subtrair()
{
    return this->denominador - this->numerador;
}

int Rational::multiplicar()
{
    return this->denominador * this->numerador;
}

int Rational::dividir()
{
    return this->denominador / this->numerador;
}

int Rational::getDenominador()
{
    return this->denominador;
}

int Rational::getNumerador()
{
    return this->numerador;
}

void Rational::imprimirRational()
{
    cout << "Rational: " << getNumerador() << "/" << getDenominador() << endl;
}

void Rational::imprimirRationalFloat()
{
    cout << "Rational Float: " << (float)getNumerador() << "/" << (float)getDenominador() << endl;
}

void Rational::result()
{
    imprimirRational();
    imprimirRationalFloat();

    cout << "Multiplicação: " << multiplicar() << endl;
    cout << "Soma: " << somar() << endl;
    cout << "Subtrair: " << subtrair() << endl;
    cout << "Divisão: " << dividir() << endl;
}

int main()
{
    Rational r(10,20);
    r.result();
}