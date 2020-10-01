#include <iostream>

// Programa que soma dois numeros

int main()
{
    int number1;

    std::cout << "Digite o primeiro inteiro: ";
    std::cin >> number1;
    
    int number2;
    int sum;

    std::cout << "Digite o segundo inteiro: ";
    std::cin >> number2;

    sum = number1 + number2;

    std::cout << "A soma é: " << sum << std::endl;

}