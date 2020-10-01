// Definição de template de função maximum

template < class T > // ou  template < typename T 

T maximum ( T value1, T value2, T value3)
{
    T maximumValue = value1;

    if(value2 > value1)
    {
        maximumValue = value2;
    }

    if(value3 > maximumValue)
    {
        maximumValue = value3;
    }

    return maximumValue;
}