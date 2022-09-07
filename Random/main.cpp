#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 15;
	int arr[n];
	//rand();	//Функция rand() возвращает псевдослучайное число, в диапазоне от 0 до 32 767 (RAND_MAX)

	//Заполнение массива случайными числами:
	int minRand, maxRand;
	do
	{
		cout << "Введите минимальное случайное число: "; cin >> minRand;
		cout << "Введите максимальное случайное число: "; cin >> maxRand;
		if (minRand >= maxRand) cout << "Error: значения некорректны, попробуйте еще раз"<<endl<<endl;
	} while (minRand>=maxRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}


	//Вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	} 
	cout << endl;
}