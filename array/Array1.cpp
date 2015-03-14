#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int n = 0;
    int l = 1;
    cout << "¬ведите число первых положительных нечЄтных:";
    cin >> n;
    const int LvlN = n;
    int sum[LvlN];
    sum[1] = 1;
    cout << endl;
    for(int i = 2; i<=n; ++i)
    {
        l +=2;
        sum[i] = l;
    }
    for(int i = 1; i<=n; ++i)
        cout << sum[i] << " ";
    return 0;
}
