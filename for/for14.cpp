/*
Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу:
N2 = 1 + 3 + 5 + … + (2·N − 1).
После добавления к сумме каждого слагаемого выводить текущее значение суммы (в результате будут выведены квадраты всех целых чисел от 1 до N).
*/
#include<iostream>
using namespace std;
int main()
{
    int n,sum,k;
    cin >> n;
    sum = 1;
    cout << sum << endl;
    for(int i = 2; i<=n; ++i)
    {
        sum = sum + ((2*i)-1);
        cout << sum << endl;
    }
    return 0;
}