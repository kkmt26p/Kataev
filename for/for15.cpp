/*
Дано вещественное число A и целое число N (> 0). Найти A в степени N:
AN = A·A· … ·A
(числа A перемножаются N раз).
*/
#include<iostream>
using namespace std;
int main()
{
    double n,sum,k,a;
    cin >> a;
    cin >> n;
    sum = a;
    for(int i = 2; i<=n; ++i)
    {
        sum = sum * a;
    }
    cout << sum << endl;
    return 0;
}
