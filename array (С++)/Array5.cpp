#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n = 0;
    int F1 = 0;
    int F2 = 0;
    int l = 0;
    cout << "������� ����� ������ ����� ������������������ �������� (N>2):";
    cin >> n;
    cout << endl;
    if(n>2)
    {
        const int LvlN = n;
        int sum[LvlN];
        sum[1] = 1;
        sum[2] = 1;
        for(int i = 3; i<=n; ++i)
            {
                l =sum[i-2]+sum[i-1];
                sum[i] = l;
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
