#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------\n"

//#define BASICS
//#define MATRIX_ADDITION

void main()
{
	setlocale(LC_ALL, "");
#ifdef BASICS
	const int ROWS = 8; //количество строк
	const int COLS = 5; //количество элементов строки (столбцов)
	//int arr[ROWS][COLS] ={} //можно просто так сделать для нулей
	int arr[ROWS][COLS] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
#endif
#ifdef MATRIX_ADDITION
	//the matrix:
	const int ROWS = 3;
	const int COLS = 3;
	int A[ROWS][COLS];
	int B[ROWS][COLS];
	for (int i = 0; i < ROWS; i++) //заполним матрицы случайными числами
	{
		for (int j = 0; j < COLS; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << A[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << B[i][j] << tab;
		}
		cout << endl;
	}
	cout << delimiter << endl;
	//	matrix addition(сложение)
	//	при сложении двух матриц мы получаем третью матрицу С, каждый элемент которой является
	//	суммой соответствующих элементов слагаемых матриц.
	int C[ROWS][COLS]{}; //- это матрица-результат


	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << C[i][j] << tab;
		}
		cout << endl;
	}
#endif
	//matrix multiplication:
	//при умножении матрица А на матрицу В, мы получаем результирующую матрицу С.
	//для того чтобы получить один элемент матрицы С, необходимо все элементы строки матрицы А
	//умножить на соответствующие элементы стоглбца матрицы В, и полученные произведения сложить
}