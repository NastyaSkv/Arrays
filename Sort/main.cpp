 //Сортируем массив со случайными числами по возрастанию

#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//Заполняем массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Cортировка массива
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;

			}
		}
	}

	//Вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}