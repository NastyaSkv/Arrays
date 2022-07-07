//1.��������� ����������� ����� ������� ������;
//2.������ �� ������ ��������� ��������� ����������� ���������� ������� � ��������� �� 0 �� 10;

#include<iostream>
using namespace std;

#define tab "\t"

//#define TASK_1
//#define TASK_2

int main()
{
    setlocale(LC_ALL, "Russian");

#ifdef TASK_1
    const int n = 10;
    int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
    //����� ��������� ������� �� �����
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

    //����� �������
    int shifts;
    cout << "������� ���������� �������: "; cin >> shifts;
    for (int i = 0; i < shifts; i++)
    {
        int buffer = arr[n - 1];            //�������� ����������
        for (int i = n; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = buffer;
    }

    //����� ���������� ������� �� �����
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;

#endif

#ifdef TASK_2
    setlocale(LC_ALL, "");
    const int n = 10;
    int arr[n];
    //���������� ������� ����������� ���������� �������

    for (int i = 0; i < n; i++)
    {
        bool unique; //� ���� ���������� ����� ���������� ����.���� ����� ��� ���
                     //���� ������������
        do {
            arr[i] = rand() % n;
            unique = true; //������������ ��� ��������������� ���������� ��������� �����
                           //�� ��� ����� ��������
            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    unique = false;
                    break;
                }
            }
        } while (!unique);
    }
    //����� �������
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << tab;
    }
    cout << endl;
#endif
}