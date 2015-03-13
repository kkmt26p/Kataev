/*
 Даны два числа. Вывести порядковый номер меньшего из них.
*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,sum;
    cin >> a;
    cin >> b;
    sum = 0;
    if (a > b)
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "1" << endl;
    }
    return 0;
}
