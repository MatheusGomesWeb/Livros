#include <string>

using namespace std;

class Date
{
    private:
        int mes;
        int dia;
        int ano;

    public:
        Date(int mes, int dia, int ano);

        void mostraData();
        void setMes(int mes);
};