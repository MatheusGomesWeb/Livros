#include <iostream>
using namespace std;

/* 
    Usando o operador unário de resolução de escopo.
 :: - Acessa variavel global que contenha o mesmo nome da variavel local para evitar conflitos.
 */

int number = 7;

int main()
{
    double number = 10.5;

    cout << "Valor da variavel local: " << number << endl;
    cout << "Valor da variavel global " << ::number << endl; 
}