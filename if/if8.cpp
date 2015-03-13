/*
 Даны два числа. Вывести вначале большее, а затем меньшее из них.
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
        cout << "Bolshee = " << a << endl;
        cout << "Menshee = " << b << endl;
    }
    else
    {
        cout << "Bolshee = " << b << endl;
        cout << "Menshee = " << a << endl;
    }
    return 0;
}
