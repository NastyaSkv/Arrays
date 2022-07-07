//реализовать перевод дес€тичного числа в Ўестнадцатеричную систему счислени€(Hexadecimal)

#include<iostream>
using namespace std;

#define Hexadecimal
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
#ifdef Hexadecimal
	int chislo;
	const int MAX_SIZE = 8;
	int ost[MAX_SIZE] = {};
	cout << "¬ведите число: "; cin >> chislo;

	int i = 0;
	while (chislo)
	{
		ost[i] = chislo % 16;
		chislo = chislo / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		//cout << ost[i] << tab;               //выводим остаток в обратном пор€дке

		const int n = 6;                       //массив дл€ букв
		int arr[n] = { 65,66,67,68,69,70 };
		int j = 0;
		int y = 0;
		bool exit = true;
		while (j != ost[i])
		{
			j = y;
			for (int m = 0; m < 10; m++)  //for дл€ цифр
			{
				if (j == ost[i])
				{
					cout << ost[i]; //содержимое €чейки совпадает с нашим числом
					exit = false;
					break;
				} j++;
			} y = j;
			if (exit == false) break;

			for (int k = 0; k < 6; k++)     //for дл€ букв
			{
				if (j == ost[i])
				{
					j = arr[k];
					cout << (char)j;
					exit = false;
					break;
				} j++;
			} if (exit == false) break;
			cout << endl;
		}
	}
}
#endif