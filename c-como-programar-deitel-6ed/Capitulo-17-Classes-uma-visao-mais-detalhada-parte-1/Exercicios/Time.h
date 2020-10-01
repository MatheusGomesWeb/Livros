#ifndef TIME_H

#define TIME_H

class Time
{
public:
    Time(); // Construtor que inicia a biblioteca <ctime> e instancia data,hora,min,seg

    // Getters::Retorna os valores contido nos atributos da classe Time
    int getDia();
    int getMes();
    int getAno();
    int getHoras();
    int getMinutos();
    int getSegundos();

    // Setters::Armazena valores nos atributos da Classe time
    void setDia(int);
    void setMes(int);
    void setAno(int);
    void setHoras(int);
    void setMinutos(int);
    void setSegundos(int);

    // Mostra mensagem
    void showMessage();

private:
    int dia;
    int mes;
    int ano;
    int horas;
    int minutos;
    int segundos;
};

#endif