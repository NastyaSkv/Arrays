//разбор дз
#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 3;
	int A[n][n] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	cout << "Init matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
	//-------------------------------
	int B[n][n*2] = {};
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			B[i][j] = B[i][j + n] = A[i][j];
		}
	}
	cout << "Extended matrix:\n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n*2; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << endl;
	//Вычисляем определитель
	int main_diag = 0;//Сумма произведений элементов главной диагонали
	int aux_diag = 0;//Сумма произведений элементов вспомогательной диагонали
	for (int i = 0; i < n; i++)
	{
		int main_product = 1; //произведение элементов одной главной диагонали
		for (int j = 0; j < n; j++)
		{
			main_product *= B[j][j + i];
		}
		main_diag += main_product;
		int aux_product = 1;
		for (int j = 0; j < n; j++)
		{
			aux_product *= B[n-1-j][j+i];
		}
		aux_diag += aux_product;
	}
	cout << "Determinant = " << main_diag - aux_diag<<endl;
}