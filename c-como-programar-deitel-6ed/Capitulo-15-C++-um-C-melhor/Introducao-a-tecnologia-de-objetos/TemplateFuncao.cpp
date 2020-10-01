#include <iostream>
using namespace std;

// Definição de template de função maximum

#include "TemplateFuncao.h"

int main()
{
    int int1, int2, int3;

    cout << "Digite três valores int: ";
    cin >> int1 >> int2 >> int3;

    //  chama a versão int de maximum
    cout << "O valor int maximo é: " << maximum(int1, int2, int3) << endl;

    // demonstra maximum com valores double

    double double1, double2, double3;

    cout << "Digite três valores double: ";
    cin >> double1 >> double2 >> double3;

    cout << "O valor double maximo é: " << maximum(double1, double2, double3) << endl;
    
    // demonsta maximum com valores char

    char char1, char2, char3;

    cout << "Digite três caracteres: ";
    cin >> char1 >> char2 >> char3;

    cout << "O valor char maximo é: " << maximum(char1, char2, char3) << endl;
}