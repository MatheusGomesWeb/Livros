#include <string>

using namespace std;

class Empregado
{
    private:
        string nome;
        string sobrenome;
        int salarioMensal;
        int salarioAumento;

        void aumentoSalario(int value);
    
    public:
        Empregado(string nome, string sobrenome, int salarioMensal);

        string getNome();
        string getSobrenome();
        int getSalarioMensal();

        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalarioMensal(int salarioMensal);

        void displayMessage();
};