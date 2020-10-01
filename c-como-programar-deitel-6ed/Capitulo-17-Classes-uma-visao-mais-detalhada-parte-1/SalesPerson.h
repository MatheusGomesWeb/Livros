#ifndef SALESP_H
#define SALESP_H

class SalesPerson
{
    public:
        static const int monthsPerYear = 12;
        SalesPerson();

        void getSalesFromUser();
        void setSales(int, float);
        void printAnnualSaleS();

    private:
        float totalAnnualSales();
        float sales[monthsPerYear];
};

#endif
