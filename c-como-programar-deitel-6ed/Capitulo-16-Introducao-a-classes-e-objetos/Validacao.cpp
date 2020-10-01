#include <iostream>

#include "Validacao.h"

using namespace std;

Validacao::Validacao(string name)
{
    setCourseName(name);
}

void Validacao::setCourseName(string name)
{
    if(name.length() <= 25)
    {
        courseName = name;
    }
    else
    {
        courseName = name.substr(0,25);

        cout << "Nome \n" << name << endl;
    }
    
}

string Validacao::getCourseName()
{
    return courseName;
}

void Validacao::displayMessage()
{
    cout << "Bem-vindo ao GradeBook para \n" << getCourseName() << endl;
}
/*

int main()
{
    Validacao valid("Matematica");

    valid.setCourseName("Programação Orientada a Objetos com C++");

    cout << "Curso digitado: " << valid.getCourseName() << endl;

    valid.displayMessage();
}*/