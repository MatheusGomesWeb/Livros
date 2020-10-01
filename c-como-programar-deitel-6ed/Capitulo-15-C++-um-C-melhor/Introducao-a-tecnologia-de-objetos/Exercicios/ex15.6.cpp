#include <iostream>
using namespace std;

// Passagem de parametro por valor e referencia

void tripleByValue(int value)
{
    value *= value * value;

    cout << "tripleByValue: " << value << endl;
}

void tripleByReference(int &value)
{
    value *= value * value +1;

    cout << "tripleByReference: " << value << endl;
}

int main()
{
    int count = 2;

    tripleByValue(count);
    tripleByReference(count);

    cout << count << endl;

    tripleByValue(count);

}