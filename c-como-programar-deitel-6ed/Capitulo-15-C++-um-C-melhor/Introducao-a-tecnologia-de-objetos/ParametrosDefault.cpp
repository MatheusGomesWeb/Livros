#include <iostream>
using namespace std;

// Usando parametros (argumentos) de funçao default

int boxVolume(int length = 1, int width = 1, int height = 1);

int main()
{

    cout << "O volume default da caixa é: " << boxVolume() << endl;

    cout << "O volume de uma caixa com comprimento 10: " << boxVolume(10) << endl;

    cout << "O volume de uma caixa com compromento 10: " << boxVolume(10,2) << endl;

    cout << "O volume de uma caixa com compromento 10: " << boxVolume(10,2,3) << endl;

}

int boxVolume(int length, int width, int height)
{
    return length * width * height;
}