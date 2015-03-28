#include<iostream>
#include<locale.h>
#include<Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    int pickV = 0;
    bool Activate = true;
    bool InterfaceV = false;
    int i = 0, j = 0;
    while(Activate == true)
    {
    if (InterfaceV == false)
    cout << "Добро пожаловать в матричный калькулятор!" << endl;
    else
    cout << "Что за операции вы хотите сделать далее? (Учтитие результаты матриц не сохраняются!)" << endl;
    InterfaceV = true;
    cout << "Выберите операцию(1 - сложение, 2 - вычетание, 3 - умножение на константу, 4 - выход.)" << endl;
    cin >> pickV;
    if(pickV == 1)
    {
    system("cls");
    cout << "Вы выбрали сложение матриц." << endl;
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
            cout << "Заполните матрицу A, построчно:" << endl;
            for( i=0; i<i_A; i++ )
                {
                    for (j=0; j<j_A; j++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "Заполните матрицу B, построчно:" << endl;
            for( i=0; i<i_B; i++ )
                {
                    for (j=0; j<i_B; j++)
                        {
                            cin >> B[i][j];
                            cout<<" ";
                        }
                }
            cout << "Полученная матрица (A+B):" << endl;
            int i_F = i_B, j_F = j_A;
            double F[i_F][j_F];
            for( i=0; i<i_F; i++ )
                {
                    cout << "|";
                    for (j=0; j<j_F; j++)
                        {
                            F[i][j] = A[i][j]+B[i][j];
                            cout<<F[i][j]<<" ";
                        }
                    cout << "|" <<endl;
                }
        }
        else
            cout << "Для сложения матриц, они должны быть одной размерности (ОШИБКА!)" << endl;
    }
    else
        if(pickV == 2)
    {
    system("cls");
    cout << "Вы выбрали разность матриц." << endl;
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
            cout << "Заполните матрицу A, построчно:" << endl;
            for( i=0; i<i_A; i++ )
                {
                    for (j=0; j<j_A; j++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "Заполните матрицу B, построчно:" << endl;
            for( i=0; i<i_B; i++ )
                {
                    for (j=0; j<j_B; j++)
                        {
                            cin >> B[i][j];
                            cout<<" ";
                        }
                }
            cout << "Полученная матрица (A-B):" << endl;
            int i_F = i_B, j_F = j_A;
            double F[i_F][j_F];
            for( i=0; i<i_F; i++ )
                {
                    cout << "|";
                    for (j=0; j<j_F; j++)
                        {
                            F[i][j] = A[i][j]-B[i][j];
                            cout<<F[i][j]<<" ";
                        }
                    cout << "|" <<endl;
                }
        }
        else
            cout << "Для сложения матриц, они должны быть одной размерности (ОШИБКА!)" << endl;
    }
    else
        if(pickV == 3)
    {
    system("cls");
    cout << "Вы выбрали умножение матрицы на константу." << endl;
    double x = 0;
    int i_A = 0, j_A = 0;
    cout << "Введите размерность матрицы A (Сначала кол-во строк, затем кол-во столбцов):";
    cin >> i_A;
    cout << "x";
    cin >> j_A;
    cout << endl;
    double A[i_A][j_A];
    cout << "Введите константу для, умножения." <<endl;
    cin >> x;
    cout << "Заполните матрицу A, построчно:" << endl;
            for( i=0; i<i_A; i++ )
                {
                    for (j=0; j<j_A; j++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "Полученная матрица (A*" << x << "):" << endl;
            for( i=0; i<i_A; i++ )
                {
                    cout << "|";
                    for (j=0; j<j_A; j++)
                        {
                            A[i][j] *=x;
                            cout<<A[i][j]<<" ";
                        }
                    cout << "|" <<endl;
                }
    }
    else
        if(pickV == 4)
    {
        Activate = false;
        cout << "Спасибо за использование нашего Матричного калькулятора!" << endl;
    }
    else
        cout << "Данной операции не существует!! Выбирите операцию заново.";
    }
    return 0;
    system("pause");
}
