#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    double l = 0;
    double A = 0;
    cout << "������� ������ ���� ���������:";
    cin >> A;
    cout << endl;
    double D = 0;
    cout << "������� �������� �������������� ����������:";
    cin >> D;
    cout << endl;
    int n = 0;
    cout << "������� ����� ������ ������ �������� ���������� (N>1):";
    cin >> n;
    cout << endl;
    if(n>1)
    {
        const int LvlN = n;
        double sum[LvlN];
        sum[1] = A;
        sum[2] = A + D;
        for(int i = 2; i<=n; ++i)
            {
                l = A + (D*(i));
                sum[i+1] = l;
            }
    for(int i = 1; i<=n; ++i)
        cout << sum[i] << " ";
    }
    else
    {
        cout << "N ������ ���� ������ 1, ��������� ���������� ��� ����������..." << endl;
    }
    return 0;
}
