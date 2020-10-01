#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// usando uma função inline para calcular o volume de um cubo.

inline double cube(const double side)
{
    return side * side * side;
}

int main()
{

    double sideValue;

    int i;

    for(i = 1; i <= 3; i++)
    {
        cout << "\nDigite o tamanho do lado do cubo: ";
        cin >> sideValue;

        cout << "O volume do cubo com lado " << sideValue << " é " << cube(sideValue) << endl;
    }

}