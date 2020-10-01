#include <iostream>
using namespace std;

#include "MenorMaiorTemplate.h"

    /* 
    
    Programa que usa template de função para sobrecarregar os métodos (funções)
    para determinar o maior e menor numero independendo do tipo dado.

    */

int main()
{
    cout << "Maior valor: " << maior(5.9,2.500) << endl;
    cout << "Menor valor: " << menor(1,9) << endl;
}

