#include <iostream>

#include "Validacao.h"

using namespace std;

int main()
{
    Validacao valid("Matematica");

    valid.setCourseName("Programação Orientada a Objetos com C++");

    cout << "Curso digitado: " << valid.getCourseName() << endl;

    valid.displayMessage();
}