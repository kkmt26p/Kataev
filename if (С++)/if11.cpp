/*
 Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений,
 а если равны, то присвоить переменным нулевые значения.
 Вывести новые значения переменных A и B.
*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,sum,Max;
    cin >> a;
    cin >> b;
    sum = 0;
    if(a > b)
    {
        Max = a;
    }
    else
    {
        Max = b;
    }

    if(a != b)
    {
        a = Max;
        b = Max;
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
