/*
    Define classe GradeBook que contém um dado membro courseName,
    e funções membro para definir e obter seu valor,
    Cria e manipula um objeto GradeBook com essas funções.
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    private:
        string courseName;

    public:

        void setCourseName(string name)
        {
            this->courseName = name;
        }
        
        string getCourseName()
        {
            return this->courseName;
        }

        void displayMessage()
        {
            cout << "Bem-vindo ao GradeBook para \n" << this->courseName << endl;
        }
};

int main()
{

    GradeBook myGradeBook;
    
    string nameOfCourse;

    cout << "Favor digitar o nome do curso: ";
    getline(cin, nameOfCourse);

    myGradeBook.setCourseName(nameOfCourse);

    cout << "Nome Digitado: " << myGradeBook.getCourseName() << endl;

    myGradeBook.displayMessage();

}