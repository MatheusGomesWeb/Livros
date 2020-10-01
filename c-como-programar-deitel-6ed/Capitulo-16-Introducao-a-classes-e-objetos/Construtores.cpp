#include "Construtores.h"

int main()
{
    GradeBook gradeBook1("Matematica");
    GradeBook gradeBook2("Portugues");

    string course;

    gradeBook1.displayMessage();
    gradeBook2.displayMessage();

    cout << "Informe o Curso: ";
    getline(cin, course);

    gradeBook1.displayMessage();

}