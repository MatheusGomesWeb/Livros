template <class T>

T maior(T min, T max)
{
    T maiorValue;
    T menorValue;

    if(min < max)
    {
        maiorValue = max;        

    }
    else 
    {
        maiorValue = min;

    }    

     return maiorValue;

}


// menor valor

template <class Y>

Y menor(Y min, Y max)
{

    Y menorValue;

    if(min < max)
    {
        menorValue = min;
    }
    else 
    {
        menorValue = max;
    }

    return menorValue;

}