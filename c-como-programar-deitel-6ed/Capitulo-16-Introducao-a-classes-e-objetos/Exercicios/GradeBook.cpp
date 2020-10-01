#include <iostream>

#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string courseName, string teacherName)
{
    this->courseName = courseName;
    this->teacherName = teacherName;
}

void GradeBook::setTeacherName(string name)
{
    this->teacherName = name;
}

void GradeBook::displayMessage()
{
    cout << "Bem vindo ao GradeBook para " << getCourseName() << endl;
    cout << "Esse curso é apresentado por: " << getTeacherName() << endl;
    cout << "====================" << endl;
}

string GradeBook::getTeacherName()
{
    return this->teacherName;
}
string GradeBook::getCourseName()
{
    return this->courseName;
}

// Método main()
int main()
{
    GradeBook myGradeBook("Programação", "Matheus");
    myGradeBook.displayMessage();

    myGradeBook.setTeacherName("Silvana");
    myGradeBook.displayMessage();
}