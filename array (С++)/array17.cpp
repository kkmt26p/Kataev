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
    for(int i = 1, l = 0, k = n, h = 1, m = -1; i <= n; ++i, ++l)
    {
        if(l < 2)
        {
            cout << ar[h] << " ";
            ++h;
        }
        else
        {
            ++m;
            if(m != 2)
            {
            cout << ar[k] << " ";
            --k;
            }
            else
            {
            l = -1;
            m = -1;
            }
        }
    }
    return 0;
}
