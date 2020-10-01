#include <iostream>
using namespace std;

// Usando sobrecarga de funções
int square(int x)
{
    cout << "quadrado de int: " << x << " é ";
    return x * x;
}

double square(double y)
{
    cout << "quadrado de double: " << y << " é ";
    return y * y;
}
int main()
{

    cout << square(7);
    cout << endl;
    cout << square(7.5);        
    cout << endl;

}