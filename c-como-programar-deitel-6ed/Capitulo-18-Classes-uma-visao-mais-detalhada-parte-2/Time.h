#ifndef TIME_H
#define TIME_H

class Time
{
    public:
        Time(int = 0, int = 0, int = 0);

        // funções set
        void setTime(int, int, int); // define tempo
        void setHour(int); // define hora
        void setMinute(int); // define minuto
        void setSecond(int); // define segundo

        // funções get
        int getHour() const; // retorna hora
        int getMinute() const; // retorna minuto
        int getSecond() const; // retorna segundo

        // funções de impressão
        void printUniversal() const; // imprime hora universal
        void printStandard() const;// imprime horario padrão
   
    private:
        int hour; // 0 - 23 (formato de relogio 24h)
        int minute; // 0 - 59
        int second; // 0-59
}; // fim classe Time

#endif