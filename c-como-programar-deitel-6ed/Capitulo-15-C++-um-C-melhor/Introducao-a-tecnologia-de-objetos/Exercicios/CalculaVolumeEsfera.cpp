#include <iostream>
#include <cmath>

using namespace std;

// Função inline que calcula o volume de uma esfera.

const double PI = 3.14159;

inline double sphereVolume(const double radius)
{
    return 4.0 / 3.0 * PI * pow(radius, 3);
}

int main()
{

    double radiusValue;

    cout << "Digite o tamanho do raio da sua esfera: ";
    cin >> radiusValue;

    cout << "Volume da esfera em raio: " << radiusValue << " é " << sphereVolume(radiusValue) << endl;

}