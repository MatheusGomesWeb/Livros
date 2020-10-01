#include <iostream>

using namespace std;

// Comparando a passagem por valor e a passagem por referencia

int squareByValue(int);
void squareByReference(int &);

int main()
{
    int x = 2;
    int z = 4;

    cout << "x = " << x << " antes de squareByValue\n";

    cout << "valor retornado por squareByValue: " << squareByValue(x) << endl;

    cout << "x = " << x << " depois de squareByValue\n" << endl;

    // Por referencia
    cout << "z = " << z << " antes de squareByReference\n";

    cout << "valor retornado por squareByReference: " <<  endl;
    squareByReference(z);

    cout << "z = " << z << " depois de squareByReference\n" << endl;

}

int squareByValue(int number)
{
    return number *= number;
}

void squareByReference(int &numberRef)
{
    numberRef *= numberRef;
}