/*
���� ������������ ����� A � ����� ����� N (> 0). ����� A � ������� N:
AN = A�A� � �A
(����� A ������������� N ���).
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
