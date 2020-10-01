#include <string>

using namespace std;

class Account {

    private:
        int saldo,total;
        int mes,dia,ano;       

    public:
        Account(int mes, int dia, int ano, int saldo); 

        void displayMessage(string message);
        void displayMessage();    
           
        int getTotal();
        int credit(int saldo);
        int debit(int saldo);
};