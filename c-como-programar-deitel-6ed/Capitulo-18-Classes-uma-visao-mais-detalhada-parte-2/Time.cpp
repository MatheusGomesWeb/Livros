#include <iostream>
#include <iomanip>

#include "Time.h"

using namespace std;

Time::Time(int hour, int minute, int second)
{   
    setTime(hour, minute, second);
}

// setters
void Time::setTime(int hour, int minute, int second)
{
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

void Time::setHour(int h)
{
    this->hour = (h >= 0 && h < 24) ? h : 0; // valida hora
}

void Time::setMinute(int m)
{
    this->minute = (m >= 0 && m < 60) ? m : 0; // valida minuto
}

void Time::setSecond(int s)
{
    this->second = (s >= 0 && s < 60) ? s : 0; // valida segundo
}

// Getters
int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}

// imprime
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" << setw(2) << second << endl;
}

void Time::printStandard() const
{
   cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 ) << ":" << setfill('0') << setw( 2 ) << minute << ":" << setw( 2 ) << second << ( hour < 12 ? " AM" : " PM") << endl;
}

int main()
{
    Time wakeup(6,45,0);
    const Time noon (12,26,0);

    wakeup.setHour(18);

    //noon.setHour(12);

    wakeup.getHour();

    noon.getMinute();
    noon.printUniversal();

    noon.printStandard();
}