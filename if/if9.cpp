/*
 ���� ��� ���������� ������������� ����: A, B.
 ���������������� �������� ������ ���������� ���, ����� � A ��������� ������� �� ��������, � � B � �������.
 ������� ����� �������� ���������� A � B.
*/
#include<iostream>
using namespace std;
int main()
{
    double a,b,sum,Min,Max;
    cin >> a;
    cin >> b;
    sum = 0;
    if (a > b)
    {
        Max = a;
        Min = b;
        a = Min;
        b = Max;
    }
    else
    {
        Max = b;
        Min = a;
        a = Min;
        b = Max;
    }
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
    return 0;
}
