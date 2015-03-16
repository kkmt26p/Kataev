/*
Дано целое число N (> 0). Найти значение выражения
1.1 − 1.2 + 1.3 − …
(N слагаемых, знаки чередуются). Условный оператор не использовать.
*/
#include<iostream>
using namespace std;
int main()
{
    double n,sum,k,a;
    cin >> n;
    sum = 1.1;
    for(int i = 2; i<=n; ++i)
    {
        if(i % 2 == 0)
        {
            sum = sum - (1.0+(0.1*i));
        }
        else
        {
            sum = sum + (1.0+(0.1*i));
        }
    }
    cout << sum << endl;
    return 0;
}
