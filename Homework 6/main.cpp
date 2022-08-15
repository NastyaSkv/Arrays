// Сложное дз ****
//1. Двумерный массив заполнить случайными числами и отсортировать в порядке возрастания;
//2. Двумерный массив заполнить уникальными случайными числами;
//3. Есть двумерный массив, заполненный заведомо повторяющимися случайными числами.
//   Необходимо найти повторяющиеся элементы, вывести их, и вывести количество их повторений;

#include<iostream>
using namespace std;

//#define TASK_1
//#define TASK_2
//#define TASK_3
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

#ifdef TASK_1
	int const A = 5;
	int const B = 5;
	int Fox[A][B];
	cout << "--- 1. --- Двумерный массив, заполненный случайными числами: " << endl;
	for (int i = 0; i < A; i++)           //заполняем массив случайными числами
	{                                     //и выводим его на экран
		for (int j = 0; j < B; j++)
		{
			Fox[i][j] = rand() % 10;
			cout << Fox[i][j] << tab;
		} cout << endl;
	} cout << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			int t = j;
			for (int w = i; w < A; w++)
			{
				for (t; t < B; t++)
				{
					if (Fox[w][t] < Fox[i][j])
					{
						int buf = Fox[i][j];
						Fox[i][j] = Fox[w][t];
						Fox[w][t] = buf;

					}
				} t = 0;
			}
		}
	}
	cout << endl << "Отсортированный в порядке возрастания массив: " << endl;
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			cout << Fox[i][j] << tab;
		} cout << endl;
	}
#endif

#ifdef TASK_2
	int const T = 4;
	int const W = 4;
	int arr[T][W];
	cout << endl << endl << "--- 2. ---Двумерный массив, заполненный уникальными случайными числами: " << endl;
	//Заполняем массив
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < W; j++)
		{
			bool unique;            //проверяем уникально ли значение
            
			do
			{
				arr[i][j] = rand() % 100; //?20
				unique = true;

				for (int m = 0; m <= i; m++)
				{
					int k;
					for (k = 0; k < j; k++)
					{
						if (arr[i][j] == arr[m][k])
						{
							unique = false;
							break;
						}
					}

					if (m < i && k == j)
					{
						for (k = 0; k < W; k++)
						{
							if (arr[i][j] == arr[m][k])
							{
								unique = false;
								break;
							}
						}
					}

				}
			} while (!unique);
		}
	}
	//вывод массива
	for (int i = 0; i < T; i++)
	{
		for (int j = 0; j < W; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl;
	} 
#endif

#ifdef TASK_3
	int const O = 4;
	int const X = 4;
	int Bum[O][X];
	cout << endl << endl << "--- 3. ---Двумерный массив, значения которого заведомо повторяются: " << endl;
	
	//Заполняем массив
	for (int i = 0; i < O; i++)           
	{                                     
		for (int j = 0; j < X; j++)
		{
			Bum[i][j] = rand() % 10;
			cout << Bum[i][j] << tab;
		} cout << endl;
	} cout << endl;

	for (int i = 0; i < O; i++)
	{
		for (int j = 0; j < X - 1; j++)
		{
			bool cup = true;

			for (int m = j - 1; m >= 0; m--)        //сравниваем выбранный элемент с УЖЕ перебранными элементами
			{
				if (Bum[i][j] == Bum[i][m])
				{
					cup = false;
					break;
				}
			}
			int y = 0;
			if (y < i)
			{
				for (y; y < i; y++)
				{
		            for (int m = 0; m < X; m++)
				    {
					    if (Bum[i][j] == Bum[y][m])
					    {
						   cup = false;
						   break;
					    }
				    }
			    }
			}

			if (cup == true)                        //если выбранный элемент ещё не перебирался, то начинаем перебор
			{
				int replay = 1;
				int s = j + 1;
				for (int r = i; r < O; r++)
				{ 
					for (s; s < X; s++)     //сравниваем выбранный элемнт с элементами из правой части массива
					{
						if (Bum[i][j] == Bum[r][s])
						{
							cout << "элемент " << Bum[i][j] << " = " << Bum[r][s] << endl;
							replay++;
						}
					} s = 0;
				} if (replay > 1) cout << "Количество повторений [" << Bum[i][j] << "] = " << replay << endl << endl;
			}
		}
	}
#endif
}