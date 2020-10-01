#include <iostream>
#include <iomanip>

#include "Time.h"

using namespace std;

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

void Time::setHour(int h)
{
    hour = (h >= 0 && h < 24) ? h : 0;
}

void Time::setMinute(int m)
{
    minute = (m >= 0 && m < 60) ? m : 0;
}

void Time::setSecond(int s)
{
    second = (s >= 0 && s < 60) ? s : 0;
}

int Time::getHour()
{
    return hour;
}

int Time::getMinute()
{
    return minute;
}

int Time::getSecond()
{
    return second;
}

void Time::printUniversal()
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second;
}

void Time::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":" << setfill('0') << setw(2) << minute << ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
}

int main()
{
    Time t1;
    Time t2(2);
    Time t3(21,31);
    Time t4(12,25,42);
    Time t5(27,74,99);

    cout << "Construido com: \nt1: todos os argumentos default\n";
    t1.printUniversal();
    cout << "\n ";
    t1.printStandard();

    cout << "\n\nt2: hora especificada; minuto e segundo default\n";
    t2.printUniversal();
    cout << "\n ";
    t2.printStandard();

    cout << "\n\nhora e minuto especificados; segundo default\n";
    t3.printUniversal();
    cout << "\n ";
    t3.printStandard();

    cout << "\n\nhora, minuto e segundo especificados\n";
    t4.printUniversal();
    cout << "\n ";
    t4.printStandard();

    cout << "\n\ntodos os valores especificados e inválidos\n";
    t5.printUniversal();
    cout << "\n ";
    t5.printStandard();
}