#include <iostream>
using namespace std;

// Programa que calcula o raio de um circulo

inline int circleArea(int x)
{
    return x * x * x;
}

int main()
{
    int raio;

    cout << "Informe o raio do circulo: ";
    cin >> raio;

    cout << "O raio do circulo é: " << circleArea(raio) << endl;
}