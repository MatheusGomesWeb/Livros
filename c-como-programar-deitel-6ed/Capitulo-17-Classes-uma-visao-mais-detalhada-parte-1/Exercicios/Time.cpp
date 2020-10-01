#include <iostream>
#include <ctime>

#include "Time.h"

using namespace std;

Time::Time() // Construtor
    {
        time_t data_tempo;
        time(&data_tempo);

        struct tm *tempo = localtime(&data_tempo);
        struct tm *data = localtime(&data_tempo);

        int dia = data->tm_mday;
        int mes = data->tm_mon + 1;
        int ano = data->tm_year + 1900;

        int horas = tempo->tm_hour;
        int minutos = tempo->tm_min;
        int segundos = tempo->tm_sec;

        setHoras(horas);
        setMinutos(minutos);
        setSegundos(segundos);
        setDia(dia);
        setMes(mes);
        setAno(ano);
    }

    // Setters
    void Time::setHoras(int h)
    {
        this->horas = (h >= 0 && h <= 60) ? h : 0;
    }

    void Time::setMinutos(int m)
    {
        this->minutos = (m >= 0 && m < 60) ? m : 0;
    }

    void Time::setSegundos(int s)
    {
        this->segundos = (s >= 0 && s < 60) ? s : 0;
    }

    void Time::setDia(int d)
    {
        this->dia = (d >= 0 && d <= 31) ? d : 0;
    }

    void Time::setMes(int me)
    {
        this->mes = (me >= 0 && me <= 31) ? me : 0;
    }

    void Time::setAno(int a)
    {
        this->ano = (a >= 2000) ? a : 0;
    }

    // Getters
    int Time::getHoras()
    {
        return this->horas;
    }

    int Time::getMinutos()
    {
        return this->minutos;
    }

    int Time::getSegundos()
    {
        return this->segundos;
    }

    int Time::getDia()
    {
        return this->dia;
    }

    int Time::getMes()
    {
        return this->mes;
    }

    int Time::getAno()
    {
        return this->ano;
    }

    // showMessage()

    void Time::showMessage()
    {
        cout << "Dia: " << getDia() 
        << "\nMes: " << getMes() 
        << "\nAno: " << getAno() 
        << "\nHoras: " << getHoras() 
        << "\nMinutos: " << getMinutos() 
        << "\nSegundos: " << getSegundos() << endl;
    }

int main()
{

    Time t;

    t.showMessage();
}