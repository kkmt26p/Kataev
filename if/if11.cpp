/*
 ���� ��� ���������� ������ ����: A � B. ���� �� �������� �� �����, �� ��������� ������ ���������� ������� �� ���� ��������,
 � ���� �����, �� ��������� ���������� ������� ��������.
 ������� ����� �������� ���������� A � B.
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
