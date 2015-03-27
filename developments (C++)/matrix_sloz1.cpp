#include<iostream>
#include<locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int i_A = 0, j_A = 0;
    int i_B = 0, j_B = 0;
    cout << "Введите размерность матрицы A (Сначала кол-во строк, затем кол-во столбцов):";
    cin >> i_A;
    cout << "x";
    cin >> j_A;
    cout << endl;
    cout << "Введите размерность матрицы B (Сначала кол-во строк, затем кол-во столбцов):";
    cin >> i_B;
    cout << "x";
    cin >> j_B;
    cout << endl;
    double A[i_A][j_A];
    double B[i_B][j_B];
    if(i_A == i_B && j_A == j_B)
        {
            int i = 0, j = 0;
            cout << "Заполните матрицу A, построчно:" << endl;
            for( j=0; j<j_A; j++ )
                {
                    for (i=0; i<i_A; i++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "Заполните матрицу B, построчно:" << endl;
            for( j=0; j<j_B; j++ )
                {
                    for (i=0; i<i_B; i++)
                        {
                            cin >> B[i][j];
                            cout<<" ";
                        }
                }
            cout << "Полученная матрица" << endl;
            int i_F = i_B, j_F = j_A;
            double F[i_F][j_F];
            for( j=0; j<j_F; j++ )
                {
                    cout << "|";
                    for (i=0; i<i_F; i++)
                        {
                            F[i][j] = A[i][j]+B[i][j];
                            cout<<F[i][j]<<" ";
                        }
                    cout << "|" <<endl;
                }
        }
        else
            cout << "Для сложения матриц, они должны быть одной размерности (ОШИБКА!)" << endl;
    return 0;
    cin;
}
