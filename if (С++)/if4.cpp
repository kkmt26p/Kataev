/*
 ���� ��� ����� �����. ����� ���������� ������������� ����� � �������� ������.
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cin >> a;
    cin >> b;
    cin >> c;
    sum = 0;
    if(a>0)
    {
        ++sum;
    }
    if(b>0)
    {
        ++sum;
    }
    if(c>0)
    {
        ++sum;
    }
    cout << sum;
    return 0;
}
