//���� ������ �� 10 ���������. �������� ��������� ��������� � ���� ������� �������� �����������,
//���������� ����� ������������� �������� � ���� �������, ������� �� �� �����, � ������� �� �����
//���������� ���������� ������� ������ ��������.

#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");

	const int n = 10;
	int arr[n];

	//����� ������� �����
	for (int i = 0; i < n; i++)
	{
		cout << i << tab;
	} cout << endl;

	//��������� ������ ���������� ����������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}

	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} cout << endl << endl;

	for (int i = 0; i < n - 1; i++)
	{
		bool cup = true;

		for (int m = i - 1; m >= 0; m--)        //���������� ��������� ������� � ��� ������������ ����������
		{
			if (arr[i] == arr[m])
			{
				cup = false;
				break;
			}
		}

		if (cup == true)                        //���� ��������� ������� ��� �� �����������, �� �������� �������
		{
			for (int j = i + 1; j < n; j++)     //���������� ��������� ������ � ���������� �� ������ ����� �������
			{
				if (arr[i] == arr[j]) cout << i << "-� ������� [" << arr[i] << "] = [" << arr[j] << "] " << j << "-� ��������" << endl;
			}

			int replay = 1;                     // ������� ���������� ������������� ���������
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j]) replay++;
			}
			if (replay > 1) cout << "���������� ���������� [" << arr[i] << "] = " << replay << endl << endl;
		}
	}
}