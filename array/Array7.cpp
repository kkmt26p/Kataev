#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n = 0;
    cout << "������� ����� �������� �����:";
    cin >> n;
    cout << endl;
    ++n;
    const int LvlN = n;
    double sum[LvlN];
    for(int i = 1; i<n; ++i)
        cin >> sum[i];
    cout << "��� ������ � �������� �������: ";
    for(int i = 1; i<n; ++i)
        cout << sum[n-i] << " ";
    return 0;
}
