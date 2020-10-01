#include <iostream>

using namespace std;

class Count
{
    public:
        void setX(int value)
        {
            x = value;
        }

        void print()
        {
            cout << x << endl;
        }

    private:
        int x;
};

int main()
{

    Count counter;
    Count *counterPtr = &counter;
    Count &counterRef = counter;

    cout << "Define x como 1 e imprime usando o nome do objeto: ";
    counter.setX(1);
    counter.print();

    cout << "Define x como 2 e imprime usando uma referencia a um objeto: ";
    counterRef.setX(2);
    counterRef.print();

    cout << "Define x como 3 e imprime usando um ponteiro de um objeto: ";
    counterPtr->setX(3);
    counterPtr->print();
}