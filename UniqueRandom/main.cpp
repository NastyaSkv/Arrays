#include<iostream>
#include<ctime>
using namespace std;

#define tab "\t"

//#define UNIQUE_1

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

	//Заполнение массива уникальными случайными числами
#ifdef UNIQUE_1
	for (int i = 0; i < n; i++)
	{
		bool unique;	//Флаг уникальности
		do
		{
			arr[i] = rand() % n;
			unique = true;	//предполагаем что сгенерировалось уникальное случайное число,
			//но это нужно проверить:
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
#endif // UNIQUE_1
	
	cout << time(NULL) << endl;
	srand(time(NULL)); 
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;        //возвращаемся на шаг назад
				break;		//прерывает текущую итерацию и все последующие
				continue;	//прерывает текущую итерацию и переходит к следующей
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}