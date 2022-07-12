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
			for (int w=i; w < A; w++)
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

	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			cout << Fox[i][j] << tab;
		} cout << endl;
	}
#endif

#ifdef TASK_2
	int const A = 3;
	int const B = 3;
	int arr[A][B];

	//Заполняем массив
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			bool unique;            //проверяем уникально ли значение
            
			do
			{
				arr[i][j] = rand() % 10; //?20
				unique = true;

				for (int m = 0; m <= i; m++)
				{
					for (int k = 0; k < j; k++)
					{
						if (arr[i][j] == arr[m][k])
						{
							unique = false;
							break;
						}
					}
				}
			} while (!unique);
		}
	}
	//вывод массива
	for (int i = 0; i < A; i++)
	{
		for (int j = 0; j < B; j++)
		{
			cout << arr[i][j] << tab;
		}cout << endl;
	} 
	
#endif
#ifdef TASK_3
#endif
}