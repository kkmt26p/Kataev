#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n = 0;
    cout << "������� ���-�� ���������:";
    cin >> n;
    cout << endl;
    double ar[n];
    for(int i = 1; i <= n; ++i)
    {
        cout << "A[" << i << "]=";
        cin >> ar[i];
        cout << "������� "<< "(" << i << " �� " << n << ")" << endl;
    }
    cout << "��������:" << endl;
    for(int i = 1; i <= n; ++i)
    {
        if(i % 2 != 0)
            cout << ar[i] << " ";
    }
    cout << endl;
    cout << "׸����:" << endl;
    for(int i = 0; i <= n-1; ++i)
    {
        if(i % 2 == 0)
            cout << ar[n-i] << " ";
    }
    cout << endl;
    return 0;
}
