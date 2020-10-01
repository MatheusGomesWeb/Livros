#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
    public:
        Rational(int n = 0, int d = 0);

        int somar();
        int subtrair();
        int multiplicar();
        int dividir();

        void imprimirRational();
        void imprimirRationalFloat();
        void result();

        int getNumerador();
        int getDenominador();

    private:
        int numerador;
        int denominador;
};

#endif