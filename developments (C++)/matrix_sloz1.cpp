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
    cout << "����� ���������� � ��������� �����������!" << endl;
    else
    cout << "��� �� �������� �� ������ ������� �����? (������� ���������� ������ �� �����������!)" << endl;
    InterfaceV = true;
    cout << "�������� ��������(1 - ��������, 2 - ���������, 3 - ��������� �� ���������, 4 - �����.)" << endl;
    cin >> pickV;
    if(pickV == 1)
    {
    system("cls");
    cout << "�� ������� �������� ������." << endl;
    int i_A = 0, j_A = 0;
    int i_B = 0, j_B = 0;
    cout << "������� ����������� ������� A (������� ���-�� �����, ����� ���-�� ��������):";
    cin >> i_A;
    cout << "x";
    cin >> j_A;
    cout << endl;
    cout << "������� ����������� ������� B (������� ���-�� �����, ����� ���-�� ��������):";
    cin >> i_B;
    cout << "x";
    cin >> j_B;
    cout << endl;
    double A[i_A][j_A];
    double B[i_B][j_B];
    if(i_A == i_B && j_A == j_B)
        {
            cout << "��������� ������� A, ���������:" << endl;
            for( j=0; j<j_A; j++ )
                {
                    for (i=0; i<i_A; i++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "��������� ������� B, ���������:" << endl;
            for( j=0; j<j_B; j++ )
                {
                    for (i=0; i<i_B; i++)
                        {
                            cin >> B[i][j];
                            cout<<" ";
                        }
                }
            cout << "���������� ������� (A+B):" << endl;
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
            cout << "��� �������� ������, ��� ������ ���� ����� ����������� (������!)" << endl;
    }
    else
        if(pickV == 2)
    {
    system("cls");
    cout << "�� ������� �������� ������." << endl;
    int i_A = 0, j_A = 0;
    int i_B = 0, j_B = 0;
    cout << "������� ����������� ������� A (������� ���-�� �����, ����� ���-�� ��������):";
    cin >> i_A;
    cout << "x";
    cin >> j_A;
    cout << endl;
    cout << "������� ����������� ������� B (������� ���-�� �����, ����� ���-�� ��������):";
    cin >> i_B;
    cout << "x";
    cin >> j_B;
    cout << endl;
    double A[i_A][j_A];
    double B[i_B][j_B];
    if(i_A == i_B && j_A == j_B)
        {
            cout << "��������� ������� A, ���������:" << endl;
            for( j=0; j<j_A; j++ )
                {
                    for (i=0; i<i_A; i++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "��������� ������� B, ���������:" << endl;
            for( j=0; j<j_B; j++ )
                {
                    for (i=0; i<i_B; i++)
                        {
                            cin >> B[i][j];
                            cout<<" ";
                        }
                }
            cout << "���������� ������� (A-B):" << endl;
            int i_F = i_B, j_F = j_A;
            double F[i_F][j_F];
            for( j=0; j<j_F; j++ )
                {
                    cout << "|";
                    for (i=0; i<i_F; i++)
                        {
                            F[i][j] = A[i][j]-B[i][j];
                            cout<<F[i][j]<<" ";
                        }
                    cout << "|" <<endl;
                }
        }
        else
            cout << "��� �������� ������, ��� ������ ���� ����� ����������� (������!)" << endl;
    }
    else
        if(pickV == 3)
    {
    system("cls");
    cout << "�� ������� ��������� ������� �� ���������." << endl;
    double x = 0;
    int i_A = 0, j_A = 0;
    double A[i_A][j_A];
    cout << "������� ����������� ������� A (������� ���-�� �����, ����� ���-�� ��������):";
    cin >> i_A;
    cout << "x";
    cin >> j_A;
    cout << endl;
    cout << "������� ��������� ���, ���������." <<endl;
    cin >> x;
    cout << "��������� ������� A, ���������:" << endl;
            for( j=0; j<j_A; j++ )
                {
                    for (i=0; i<i_A; i++)
                        {
                            cin >> A[i][j];
                            cout<<" ";
                        }
                }
            cout << "���������� ������� (A*" << x << "):" << endl;
            for( j=0; j<j_A; j++ )
                {
                    cout << "|";
                    for (i=0; i<i_A; i++)
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
        cout << "������� �� ������������� ������ ���������� ������������!" << endl;
    }
    else
        cout << "������ �������� �� ����������!! �������� �������� ������.";
    }
    return 0;
    system("pause");
}
