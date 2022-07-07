//реализовать циклический сдвиг массива на заданное число элементов.
//Ёлементы массива должны изменитьсвое расположение в пам€ти

#include<iostream>
using namespace std;
#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];
	int nul[n];

	cout << "¬ведите значение элементов массива: ";
	for (int i = 0; i < n; i++) cin >> arr[i];                 //ввод массива

	for (int i = 0; i < n; i++) cout << arr[i] << tab;         //вывод массива
	cout << endl;

	for (int i = 0; i < n; i++) nul[i] = arr[i];               //создание копии массива

	int shift;
	cout << endl << "¬ведите желаемый сдвиг: "; cin >> shift;  // ввод сдвига

	int t = n - shift;
	for (int i = 0; i < t; i++) arr[i] = arr[i + shift];       //сдвиг первых t €чеек

	for (int i = 0; i < shift; i++)                            //сдвиг "хвоста" €чеек (n-t=shift)
	{
		arr[t] = nul[i];
		t++;
	}

	for (int i = 0; i < n; i++) cout << arr[i] << tab;         //вывод сдвинутого массива
}