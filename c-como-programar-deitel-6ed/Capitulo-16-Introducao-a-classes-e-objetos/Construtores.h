/*
    Instanciando multiplos objetos da classe GradeBook e usando
    o construtor de GradeBook para especificar o nome do curso
    quando cada objeto GradeBook for criado.
 */

#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
    private:
    string courseName;

    public:

    GradeBook(string courseName)
    {
        this->courseName = courseName;
    }

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
        cout << "Bem-vindo ao GradeBook para\n" << this->courseName << endl;
    }

};