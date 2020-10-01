#ifndef INCREMENT_H
#define INCREMENT_H

// Inicialização de um dado-membro const com um inicilizador de membro

class Increment {
    
    public:
        Increment(int c = 0, int i = 1); // construtor com parametros com valores default

        void addIncrement()
        {
            count += increment;
        }

        void print() const; // imprime count e increment

    private:
        int count;
        const int increment; // dado-membro const
};

#endif