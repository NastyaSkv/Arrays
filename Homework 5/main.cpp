//1. реализовать алгоритм умножения матриц
//2. найти определитель матрицы третьего порядка используя алгоритм Саррюса

#include<iostream>
using namespace std;

#define tab "\t"
#define delimiter "\n-----------------\n"

//#define MATRIX_MULTIPLICATION
//#define SARRYS

void main()
{
	setlocale(LC_ALL, "");

#ifdef MATRIX_MULTIPLICATION
	//объявляем матрицы
	const int FIRST = 3;
	const int SECOND = 3;
	int A[FIRST][SECOND];
	int B[FIRST][SECOND];

	//заполняем матрицы
	for (int i = 0; i < FIRST; i++)
	{
		for (int j = 0; j < SECOND; j++)
		{
			A[i][j] = rand() % 10;
			B[i][j] = rand() % 10;
		}
	}

	//выведем матрицу А
	cout << "Matrix A: " << endl;
	for (int i = 0; i < FIRST; i++)
	{
		for (int j = 0; j < SECOND; j++)
		{
			cout << A[i][j] << tab;
		} cout << endl;
	} cout << endl;

	//выведем матрицу В
	cout << "Matrix B: " << endl;
	for (int i = 0; i < FIRST; i++)
	{
		for (int j = 0; j < SECOND; j++)
		{
			cout << B[i][j] << tab;
		} cout << endl;
	}

	//перемножим А и В, и выведем матрицу С
	cout << endl << "A x B = Matrix C" << endl;
	int C[FIRST][SECOND]{};
	for (int i = 0; i < FIRST; i++)
	{
		for (int m = 0; m < SECOND; m++)
		{
			int k = 0;
			int j = 0;
			C[i][m] = A[i][j] * B[k][m];

			for (k++, j++; k < FIRST && j < SECOND; k++, j++)
			{
				C[i][m] = C[i][m] + A[i][j] * B[k][m];
			}	cout << C[i][m] << tab;
		} cout << endl;
	}
#endif

#ifdef SARRYS
	const int FIRST = 3;
	const int SECOND = 3;
	int A[FIRST][SECOND];

	//заполняем матрицу
	for (int i = 0; i < FIRST; i++)
	{
		for (int j = 0; j < SECOND; j++)
		{
			A[i][j] = rand() % 10;
		}
	}

	//выведем матрицу А
	cout << "Matrix A: " << endl;
	for (int i = 0; i < FIRST; i++)
	{
		for (int j = 0; j < SECOND; j++)
		{
			cout << A[i][j] << tab;
		} cout << endl;
	} cout << endl;

	const int THREE = 5;
	int B[FIRST][THREE];

	for (int i = 0; i < FIRST; i++)
	{
		int j = 0;
		for (j; j < SECOND; j++)
		{
			B[i][j] = A[i][j];
			cout << B[i][j] << tab;
		}
		int y = 0;
		for (j; j < THREE; j++)
		{
			B[i][j] = A[i][y];
			y++;
			cout << B[i][j] << tab;
		} cout << endl;
	}
	int opr = 0;
	opr = B[0][0] * B[1][1] * B[2][2] + B[0][1] * B[0][2] * B[0][3] + B[0][2] * B[1][3] * B[2][4] - B[0][2] * B[1][1] * B[2][0] - B[0][0] * B[1][2] * B[2][4] - B[0][4] * B[1][3] * B[2][2];
	cout << opr;

#endif
}