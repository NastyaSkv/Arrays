//Array
#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

	// Синтаксис:    type name[SIZE];
	const int n = 5;
	int arr[n] = { 3,5,8 };
	// Обращение к элементу массива arr[2] = 123;
	//arr[2] = 123;


	//Ввод массива с клавиатуры
	cout << "Введите значения элементов массива: ";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; //обращаемся к элементу массива на запись
	}


	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab; //обращаемся к элементу массива на чтение
	}
	cout << endl;


	//Вывод массива на экран в обратном порядке
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab; //обращаемся к элементу массива на чтение
	}
	cout << endl;


	//Вычисление суммы элементов массива
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов: " << sum << endl;
	cout << "Среднее арифметическое элементов массива: " << (double)sum / n << endl;

	//Поиск минимального и максимального значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве: " << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
}