#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
    public:
        Complex(double, double);

        double getNumReal();
        double getPtImaginaria();
        double getResult();
        double getTotal();

        void soma(int);        

        void setNumReal(double);
        void setPtImaginaria(double);
        void result();

    private:
        double numReal;
        double ptImaginaria;
        double total;
};

#endif