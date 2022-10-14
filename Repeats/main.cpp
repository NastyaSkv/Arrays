#include<iostream>
using namespace std;

#define tab "\t"

//#define NEVER_BEFORE

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

#ifdef NEVER_BEFORE
	for (int i = 0; i < n; i++)
	{
		bool never_before = true;	//Предполагаем, что текущее значение ранее НЕ встречалось в это массиве,
		//но это нужно проветрить:
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				never_before = false;
				break;
			}
		}
		if (never_before)
		{
			int count = 0;	//Счетчик повторений
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] == arr[j])
				{
					count++;
				}
			}
			if (count > 0)cout << arr[i] << " повторяется " << count << " раз\n";
		}
	}
#endif // NEVER_BEFORE

	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])count++;
		}
		//https://cplusplus.com/reference/cstdio/printf/?kw=printf
		if (count > 0)printf("%i повторяется %i раз\n", arr[i], count);
		//cout << arr[i] << " повторяется " << count << " раз\n";
	}
}