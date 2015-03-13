/*
 Дано целое число N (> 0). Найти сумму
N2 + (N + 1)2 + (N + 2)2 + … + (2·N)2
(целое число).
*/
#include<iostream>
using namespace std;
int main()
{
    double n,sum,k;
    cin >> n;
    sum = n*n;
    for(int i = 1; i<=n; ++i)
    {
        k = n + i;
        sum = sum + (k*k);
    }
    cout << sum << endl;
    return 0;
}
