/*
    Define classe GradeBook com função-membro que usa um parametro,
    Cria um objeto GradeBook e chama sua função displayMessage.
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    private:

        string curso;      

    public:

        void displayMessage()
        {
            cout << "Bem-vindo ao GradeBook para\n" << this->curso << endl;
        }

         void setCursoMessage()
        {
            cout << "Favor informar o nome do curso: ";

            getline(cin, this->curso);
        }
        
};

int main()
{
    GradeBook myGradeBook;    

    myGradeBook.setCursoMessage();
    myGradeBook.displayMessage();
}