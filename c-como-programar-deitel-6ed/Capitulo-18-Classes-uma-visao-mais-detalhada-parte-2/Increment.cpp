#include <iostream>

#include "Increment.h"

using namespace std;

Increment::Increment(int c, int i) 
    :count(c),
    increment(i)
{
    
}

void Increment::print() const
{
    cout << "count = " << count << ", increment = " << increment << endl;
}


int main()
{

    Increment value(10,5);

    cout << "Antes de incrementar: ";
    value.print();

    for(int j = 1; j <= 3; j++)
    {
        value.addIncrement();
        cout << "Depois de incrementar: ";
        value.print();
    }

}