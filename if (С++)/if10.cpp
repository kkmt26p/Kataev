/*
 ƒаны две переменные целого типа: A и B. ≈сли их значени€ не равны, то присвоить
 каждой переменной сумму этих значений, а если равны, то
 присвоить переменным нулевые значени€. ¬ывести новые значени€ переменных A и B.
*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,sum;
    cin >> a;
    cin >> b;
    sum = 0;
    if(a != b)
    {
        sum = a + b;
        a = sum;
        b = sum;
    }
    else
    {
        a = 0;
        b = 0;
    }
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}
