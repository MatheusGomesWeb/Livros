/*
    Define a classe GradeBook com uma função-membro displayMessage,
    cria um objeto GradeBook e chama sua função displayMessage.
 */

#include <iostream>
using namespace std;

class GradeBook
{
    public:
        void displayMessage()
        {
            cout << "Bem-vindo ao Grade Book!" << endl;
        }
};

int main()
{
    GradeBook myGradeBook;

    myGradeBook.displayMessage();
}