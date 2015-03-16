/*
 Дано целое число N (> 0). Найти произведение
1.1 · 1.2 · 1.3 · …
(N сомножителей).
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
        sum = sum * (1.0+(0.1*i));
    }
    cout << sum << endl;
    return 0;
}
