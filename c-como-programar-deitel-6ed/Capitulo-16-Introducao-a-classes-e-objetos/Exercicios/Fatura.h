#include <string>

using namespace std;

class Fatura
{
    private:
        string numero;
        string descricao;
        int quantidade;
        int preco;
        int total;
        
        int isPositive(int number);

    public:
        Fatura(string numero, string descricao, int quantidade, int preco);

        void setNumero(string numero);
        void setDescricao(string descricao);
        void setQuantidade(int quantidade);
        void setPreco(int preco);

        string getNumero();
        string getDescricao();
        int getQuantidade();
        int getPreco();

        int obterValorFatura();
};